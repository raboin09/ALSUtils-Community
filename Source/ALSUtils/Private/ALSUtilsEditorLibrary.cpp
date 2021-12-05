// Copyright Epic Games, Inc. All Rights Reserved.

#include "ALSUtilsEditorLibrary.h"

UALSUtilsEditorLibrary::UALSUtilsEditorLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void UALSUtilsEditorLibrary::ALSUtils_AddALSNecessitiesToSkeletalMesh(USkeletalMesh* SkeletalMesh)
{
	if(!SkeletalMesh)
	{
		return;
	}

	bool bSuccess = true;
	if(USkeleton* InSkeleton =  SkeletalMesh->GetSkeleton())
	{
		bSuccess = bSuccess && ALSUtils_AddNewVirtualBonesToSkeleton(InSkeleton);
	} else
	{
		bSuccess = false;
		ALS_UTILS_POPUP("ERROR: No valid skeleton could be found for " + SkeletalMesh->GetName());
	}	
	
	if(UPhysicsAsset* InPhysicsAsset = SkeletalMesh->GetPhysicsAsset())
	{
		bSuccess = bSuccess && ALSUtils_AddRootPhysicsSphere(InPhysicsAsset);
	} else
	{
		bSuccess = false;
		ALS_UTILS_POPUP("ERROR: No valid physics asset could be found for " + SkeletalMesh->GetName());
	}

	if(bSuccess)
	{
		ALS_UTILS_POPUP("SUCCESS: ALSUtils added the ALS necessities to " + SkeletalMesh->GetName() + "!");	
	} else
	{
		ALS_UTILS_POPUP("ERROR: ALSUtils had some issues with adding all the ALS necessities to " + SkeletalMesh->GetName());
	}
}

bool UALSUtilsEditorLibrary::ALSUtils_AddRootPhysicsSphere(UPhysicsAsset* InPhysics)
{
	if(!InPhysics)
	{
		ALS_UTILS_POPUP("ERROR: This physics asset is not valid");
		return false;
	}

	// Find the physics body index of the root bone. If no physics body exists for the root bone, we add a default sphere to the physics asset.
	const FName RootBone = FName(TEXT("root"));
	const int BodyIndex = InPhysics->FindBodyIndex(RootBone);
	USkeletalBodySetup* NewBodySetup = BodyIndex == INDEX_NONE ? nullptr : InPhysics->SkeletalBodySetups[BodyIndex];
	if(!IsValid(NewBodySetup))
	{
		NewBodySetup = NewObject<USkeletalBodySetup>(InPhysics, "root");
		NewBodySetup->BoneName = RootBone;
		NewBodySetup->CollisionTraceFlag = CTF_UseSimpleAsComplex;
		NewBodySetup->PhysicsType = PhysType_Kinematic;
		NewBodySetup->CollisionReponse = EBodyCollisionResponse::BodyCollision_Disabled;
		NewBodySetup->AggGeom.SphereElems.Add(FKSphereElem(7.505));
		InPhysics->SkeletalBodySetups.Add(NewBodySetup);
		InPhysics->UpdateBodySetupIndexMap();
		InPhysics->UpdateBoundsBodiesArray();
		return true;
	}
	return true;
}

bool UALSUtilsEditorLibrary::ALSUtils_AddNewVirtualBonesToSkeleton(USkeleton* InSkeleton)
{
	if(!InSkeleton)
	{
		ALS_UTILS_POPUP("ERROR: This skeleton is not valid");
		return false;
	}
	
	// Hands
	const FName hand_l = FName(TEXT("hand_l"));
	const FName hand_r = FName(TEXT("hand_r"));
	const FName ik_hand_l = FName(TEXT("ik_hand_l"));
	const FName ik_hand_r = FName(TEXT("ik_hand_r"));	
	const FName ik_hand_gun = FName(TEXT("ik_hand_gun"));

	// Feet
	const FName foot_l = FName(TEXT("foot_l"));
	const FName foot_r = FName(TEXT("foot_r"));
	const FName calf_l = FName(TEXT("calf_l"));
	const FName calf_r = FName(TEXT("calf_r"));
	const FName ik_foot_l = FName(TEXT("ik_foot_l"));
	const FName ik_foot_r = FName(TEXT("ik_foot_r"));
	const FName ik_foot_root = FName(TEXT("ik_foot_root"));

	// Root
	const FName root = FName(TEXT("root"));
	
	// VB Names
	const FName LHS_ik_hand_gun = FName(TEXT("VB LHS_ik_hand_gun"));
	const FName LHS_ik_hand_r = FName(TEXT("VB LHS_ik_hand_r"));
	const FName RHS_ik_hand_gun = FName(TEXT("VB RHS_ik_hand_gun"));
	const FName RHS_ik_hand_l = FName(TEXT("VB RHS_ik_hand_l"));
	const FName Foot_target_r = FName(TEXT("VB Foot_target_r"));
	const FName Foot_target_l = FName(TEXT("VB Foot_target_l"));
	const FName ik_knee_target_r = FName(TEXT("VB ik_knee_target_r"));
	const FName ik_knee_target_l = FName(TEXT("VB ik_knee_target_l"));
	const FName ik_foot_l_Offset = FName(TEXT("VB ik_foot_l_Offset"));
	const FName ik_foot_r_Offset = FName(TEXT("VB ik_foot_r_Offset"));
	const FName Curves = FName(TEXT("VB Curves"));

	bool bReturnSuccess = true;

	// Hands
	bReturnSuccess = bReturnSuccess && ALSUtils_AddNewVirtualBoneToSkeleton(InSkeleton, hand_l, ik_hand_gun, LHS_ik_hand_gun);
	bReturnSuccess = bReturnSuccess && ALSUtils_AddNewVirtualBoneToSkeleton(InSkeleton, hand_r, ik_hand_gun, RHS_ik_hand_gun);
	bReturnSuccess = bReturnSuccess && ALSUtils_AddNewVirtualBoneToSkeleton(InSkeleton, LHS_ik_hand_gun, ik_hand_r, LHS_ik_hand_r);
	bReturnSuccess = bReturnSuccess && ALSUtils_AddNewVirtualBoneToSkeleton(InSkeleton, RHS_ik_hand_gun, ik_hand_l, RHS_ik_hand_l);

	// Feet
	bReturnSuccess = bReturnSuccess && ALSUtils_AddNewVirtualBoneToSkeleton(InSkeleton, ik_foot_l, foot_l, ik_foot_l_Offset);
	bReturnSuccess = bReturnSuccess && ALSUtils_AddNewVirtualBoneToSkeleton(InSkeleton, ik_foot_l, calf_l, ik_knee_target_l);	
	bReturnSuccess = bReturnSuccess && ALSUtils_AddNewVirtualBoneToSkeleton(InSkeleton, ik_foot_r, foot_r, ik_foot_r_Offset);
	bReturnSuccess = bReturnSuccess && ALSUtils_AddNewVirtualBoneToSkeleton(InSkeleton, ik_foot_r, calf_r, ik_knee_target_r);
	bReturnSuccess = bReturnSuccess && ALSUtils_AddNewVirtualBoneToSkeleton(InSkeleton, ik_foot_root, foot_l, Foot_target_l);
	bReturnSuccess = bReturnSuccess && ALSUtils_AddNewVirtualBoneToSkeleton(InSkeleton, ik_foot_root, foot_r, Foot_target_r);

	// Curves
	bReturnSuccess = bReturnSuccess && ALSUtils_AddNewVirtualBoneToSkeleton(InSkeleton, root, root, Curves);

	return bReturnSuccess;
}

bool UALSUtilsEditorLibrary::ALSUtils_AddNewVirtualBoneToSkeleton(USkeleton* InSkeleton, const FName& SourceBoneName, const FName& TargetBoneName, const FName& VirtualBoneName)
{
	if(!InSkeleton)
	{
		ALS_UTILS_POPUP("ERROR: This skeleton is not valid");
		return false;
	}
	// TempVBName will the new VB name when UE4 creates the VB. We will use that new VB name when we rename the VB to our own VB name.
	// For example: TempVBName would be "VB hand_l_ik_hand_r" after we ran AddNewVirtualBone.
	// When we run RenameVirtualBone, we need that name to find the new VB.
	FName TempVBName;
	InSkeleton->AddNewVirtualBone(SourceBoneName, TargetBoneName, TempVBName);
	InSkeleton->RenameVirtualBone(TempVBName, VirtualBoneName);
	return true;
}