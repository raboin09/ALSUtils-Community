// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Misc/MessageDialog.h"
#include "ALSUtilsEditorLibrary.generated.h"

#define ALS_UTILS_POPUP(InMessage) FMessageDialog::Debugf(FText::FromString(InMessage));

UCLASS()
class UALSUtilsEditorLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category="ALSUtils|SkeletalMesh|Retarget")
	static void ALSUtils_RetargetALSAnimBPToThisMesh(UObject* InSkeletalMeshObj, const FString& OutputFolderPath);
	UFUNCTION(BlueprintCallable, Category="ALSUtils|SkeletalMesh|Necessity")
	static void ALSUtils_AddALSNecessitiesToSkeletalMesh(UObject* InSkeletalMeshObj);
	
	UFUNCTION(BlueprintCallable, Category="ALSUtils|PhysicsAsset|Necessity")
	static bool ALSUtils_AddRootPhysicsSphere(UObject* InPhysics);

	UFUNCTION(BlueprintCallable, Category="ALSUtils|Skeleton|Retarget")
	static void ALSUtils_RetargetALSAnimBPToThisSkeleton(UObject* InSkeletonObj, const FString& OutputFolderPath);
	UFUNCTION(BlueprintCallable, Category="ALSUtils|Skeleton|Necessity")
	static bool ALSUtils_AddNewVirtualBonesToSkeleton(UObject* InSkeletonObj);
	UFUNCTION(BlueprintCallable, Category="ALSUtils|Skeleton|Necessity")
	static bool ALSUtils_PrepareSkeletonForRetargeting(UObject* InSkeletonObj);

	static bool ALSUtils_SetRetargetingRigToDefaultHumanoid(USkeleton* InSkeleton);
	static bool ALSUtils_SetBoneTranslationRetargeting(USkeleton* InSkeleton, const FName& BoneName, EBoneTranslationRetargetingMode::Type TranslationRetargetingMode);
	static bool ALSUtils_AddNewVirtualBoneToSkeleton(USkeleton* InSkeleton, const FName& SourceBoneName, const FName& TargetBoneName, const FName& VirtualBoneName);
};