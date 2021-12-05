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
	UFUNCTION(BlueprintCallable)
	static void ALSUtils_AddALSNecessitiesToSkeletalMesh(USkeletalMesh* SkeletalMesh);
	UFUNCTION(BlueprintCallable)
	static bool ALSUtils_AddRootPhysicsSphere(UPhysicsAsset* InPhysics);
	UFUNCTION(BlueprintCallable)
	static bool ALSUtils_AddNewVirtualBonesToSkeleton(USkeleton* InSkeleton);
	static bool ALSUtils_AddNewVirtualBoneToSkeleton(USkeleton* InSkeleton, const FName& SourceBoneName, const FName& TargetBoneName, const FName& VirtualBoneName);
};