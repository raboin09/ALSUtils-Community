// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALSUtils/Public/ALSUtilsEditorLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALSUtilsEditorLibrary() {}
// Cross Module References
	ALSUTILS_API UClass* Z_Construct_UClass_UALSUtilsEditorLibrary_NoRegister();
	ALSUTILS_API UClass* Z_Construct_UClass_UALSUtilsEditorLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ALSUtils();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UALSUtilsEditorLibrary::execALSUtils_PrepareSkeletonForRetargeting)
	{
		P_GET_OBJECT(UObject,Z_Param_InSkeletonObj);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UALSUtilsEditorLibrary::ALSUtils_PrepareSkeletonForRetargeting(Z_Param_InSkeletonObj);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSUtilsEditorLibrary::execALSUtils_AddNewVirtualBonesToSkeleton)
	{
		P_GET_OBJECT(UObject,Z_Param_InSkeletonObj);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UALSUtilsEditorLibrary::ALSUtils_AddNewVirtualBonesToSkeleton(Z_Param_InSkeletonObj);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSUtilsEditorLibrary::execALSUtils_RetargetALSAnimBPToThisSkeleton)
	{
		P_GET_OBJECT(UObject,Z_Param_InSkeletonObj);
		P_GET_PROPERTY(FStrProperty,Z_Param_OutputFolderPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UALSUtilsEditorLibrary::ALSUtils_RetargetALSAnimBPToThisSkeleton(Z_Param_InSkeletonObj,Z_Param_OutputFolderPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSUtilsEditorLibrary::execALSUtils_AddRootPhysicsSphere)
	{
		P_GET_OBJECT(UObject,Z_Param_InPhysics);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UALSUtilsEditorLibrary::ALSUtils_AddRootPhysicsSphere(Z_Param_InPhysics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSUtilsEditorLibrary::execALSUtils_AddALSNecessitiesToSkeletalMesh)
	{
		P_GET_OBJECT(UObject,Z_Param_InSkeletalMeshObj);
		P_FINISH;
		P_NATIVE_BEGIN;
		UALSUtilsEditorLibrary::ALSUtils_AddALSNecessitiesToSkeletalMesh(Z_Param_InSkeletalMeshObj);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSUtilsEditorLibrary::execALSUtils_RetargetALSAnimBPToThisMesh)
	{
		P_GET_OBJECT(UObject,Z_Param_InSkeletalMeshObj);
		P_GET_PROPERTY(FStrProperty,Z_Param_OutputFolderPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UALSUtilsEditorLibrary::ALSUtils_RetargetALSAnimBPToThisMesh(Z_Param_InSkeletalMeshObj,Z_Param_OutputFolderPath);
		P_NATIVE_END;
	}
	void UALSUtilsEditorLibrary::StaticRegisterNativesUALSUtilsEditorLibrary()
	{
		UClass* Class = UALSUtilsEditorLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ALSUtils_AddALSNecessitiesToSkeletalMesh", &UALSUtilsEditorLibrary::execALSUtils_AddALSNecessitiesToSkeletalMesh },
			{ "ALSUtils_AddNewVirtualBonesToSkeleton", &UALSUtilsEditorLibrary::execALSUtils_AddNewVirtualBonesToSkeleton },
			{ "ALSUtils_AddRootPhysicsSphere", &UALSUtilsEditorLibrary::execALSUtils_AddRootPhysicsSphere },
			{ "ALSUtils_PrepareSkeletonForRetargeting", &UALSUtilsEditorLibrary::execALSUtils_PrepareSkeletonForRetargeting },
			{ "ALSUtils_RetargetALSAnimBPToThisMesh", &UALSUtilsEditorLibrary::execALSUtils_RetargetALSAnimBPToThisMesh },
			{ "ALSUtils_RetargetALSAnimBPToThisSkeleton", &UALSUtilsEditorLibrary::execALSUtils_RetargetALSAnimBPToThisSkeleton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddALSNecessitiesToSkeletalMesh_Statics
	{
		struct ALSUtilsEditorLibrary_eventALSUtils_AddALSNecessitiesToSkeletalMesh_Parms
		{
			UObject* InSkeletalMeshObj;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSkeletalMeshObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddALSNecessitiesToSkeletalMesh_Statics::NewProp_InSkeletalMeshObj = { "InSkeletalMeshObj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALSUtilsEditorLibrary_eventALSUtils_AddALSNecessitiesToSkeletalMesh_Parms, InSkeletalMeshObj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddALSNecessitiesToSkeletalMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddALSNecessitiesToSkeletalMesh_Statics::NewProp_InSkeletalMeshObj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddALSNecessitiesToSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALSUtils|SkeletalMesh|Necessity" },
		{ "ModuleRelativePath", "Public/ALSUtilsEditorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddALSNecessitiesToSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSUtilsEditorLibrary, nullptr, "ALSUtils_AddALSNecessitiesToSkeletalMesh", nullptr, nullptr, sizeof(ALSUtilsEditorLibrary_eventALSUtils_AddALSNecessitiesToSkeletalMesh_Parms), Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddALSNecessitiesToSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddALSNecessitiesToSkeletalMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddALSNecessitiesToSkeletalMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddALSNecessitiesToSkeletalMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddALSNecessitiesToSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddALSNecessitiesToSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton_Statics
	{
		struct ALSUtilsEditorLibrary_eventALSUtils_AddNewVirtualBonesToSkeleton_Parms
		{
			UObject* InSkeletonObj;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSkeletonObj;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton_Statics::NewProp_InSkeletonObj = { "InSkeletonObj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALSUtilsEditorLibrary_eventALSUtils_AddNewVirtualBonesToSkeleton_Parms, InSkeletonObj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSUtilsEditorLibrary_eventALSUtils_AddNewVirtualBonesToSkeleton_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALSUtilsEditorLibrary_eventALSUtils_AddNewVirtualBonesToSkeleton_Parms), &Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton_Statics::NewProp_InSkeletonObj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALSUtils|Skeleton|Necessity" },
		{ "ModuleRelativePath", "Public/ALSUtilsEditorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSUtilsEditorLibrary, nullptr, "ALSUtils_AddNewVirtualBonesToSkeleton", nullptr, nullptr, sizeof(ALSUtilsEditorLibrary_eventALSUtils_AddNewVirtualBonesToSkeleton_Parms), Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddRootPhysicsSphere_Statics
	{
		struct ALSUtilsEditorLibrary_eventALSUtils_AddRootPhysicsSphere_Parms
		{
			UObject* InPhysics;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPhysics;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddRootPhysicsSphere_Statics::NewProp_InPhysics = { "InPhysics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALSUtilsEditorLibrary_eventALSUtils_AddRootPhysicsSphere_Parms, InPhysics), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddRootPhysicsSphere_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSUtilsEditorLibrary_eventALSUtils_AddRootPhysicsSphere_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddRootPhysicsSphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALSUtilsEditorLibrary_eventALSUtils_AddRootPhysicsSphere_Parms), &Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddRootPhysicsSphere_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddRootPhysicsSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddRootPhysicsSphere_Statics::NewProp_InPhysics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddRootPhysicsSphere_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddRootPhysicsSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALSUtils|PhysicsAsset|Necessity" },
		{ "ModuleRelativePath", "Public/ALSUtilsEditorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddRootPhysicsSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSUtilsEditorLibrary, nullptr, "ALSUtils_AddRootPhysicsSphere", nullptr, nullptr, sizeof(ALSUtilsEditorLibrary_eventALSUtils_AddRootPhysicsSphere_Parms), Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddRootPhysicsSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddRootPhysicsSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddRootPhysicsSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddRootPhysicsSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddRootPhysicsSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddRootPhysicsSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_PrepareSkeletonForRetargeting_Statics
	{
		struct ALSUtilsEditorLibrary_eventALSUtils_PrepareSkeletonForRetargeting_Parms
		{
			UObject* InSkeletonObj;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSkeletonObj;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_PrepareSkeletonForRetargeting_Statics::NewProp_InSkeletonObj = { "InSkeletonObj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALSUtilsEditorLibrary_eventALSUtils_PrepareSkeletonForRetargeting_Parms, InSkeletonObj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_PrepareSkeletonForRetargeting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSUtilsEditorLibrary_eventALSUtils_PrepareSkeletonForRetargeting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_PrepareSkeletonForRetargeting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALSUtilsEditorLibrary_eventALSUtils_PrepareSkeletonForRetargeting_Parms), &Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_PrepareSkeletonForRetargeting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_PrepareSkeletonForRetargeting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_PrepareSkeletonForRetargeting_Statics::NewProp_InSkeletonObj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_PrepareSkeletonForRetargeting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_PrepareSkeletonForRetargeting_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALSUtils|Skeleton|Necessity" },
		{ "ModuleRelativePath", "Public/ALSUtilsEditorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_PrepareSkeletonForRetargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSUtilsEditorLibrary, nullptr, "ALSUtils_PrepareSkeletonForRetargeting", nullptr, nullptr, sizeof(ALSUtilsEditorLibrary_eventALSUtils_PrepareSkeletonForRetargeting_Parms), Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_PrepareSkeletonForRetargeting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_PrepareSkeletonForRetargeting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_PrepareSkeletonForRetargeting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_PrepareSkeletonForRetargeting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_PrepareSkeletonForRetargeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_PrepareSkeletonForRetargeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisMesh_Statics
	{
		struct ALSUtilsEditorLibrary_eventALSUtils_RetargetALSAnimBPToThisMesh_Parms
		{
			UObject* InSkeletalMeshObj;
			FString OutputFolderPath;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSkeletalMeshObj;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputFolderPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutputFolderPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisMesh_Statics::NewProp_InSkeletalMeshObj = { "InSkeletalMeshObj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALSUtilsEditorLibrary_eventALSUtils_RetargetALSAnimBPToThisMesh_Parms, InSkeletalMeshObj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisMesh_Statics::NewProp_OutputFolderPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisMesh_Statics::NewProp_OutputFolderPath = { "OutputFolderPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALSUtilsEditorLibrary_eventALSUtils_RetargetALSAnimBPToThisMesh_Parms, OutputFolderPath), METADATA_PARAMS(Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisMesh_Statics::NewProp_OutputFolderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisMesh_Statics::NewProp_OutputFolderPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisMesh_Statics::NewProp_InSkeletalMeshObj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisMesh_Statics::NewProp_OutputFolderPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALSUtils|SkeletalMesh|Retarget" },
		{ "ModuleRelativePath", "Public/ALSUtilsEditorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSUtilsEditorLibrary, nullptr, "ALSUtils_RetargetALSAnimBPToThisMesh", nullptr, nullptr, sizeof(ALSUtilsEditorLibrary_eventALSUtils_RetargetALSAnimBPToThisMesh_Parms), Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisSkeleton_Statics
	{
		struct ALSUtilsEditorLibrary_eventALSUtils_RetargetALSAnimBPToThisSkeleton_Parms
		{
			UObject* InSkeletonObj;
			FString OutputFolderPath;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSkeletonObj;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputFolderPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutputFolderPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisSkeleton_Statics::NewProp_InSkeletonObj = { "InSkeletonObj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALSUtilsEditorLibrary_eventALSUtils_RetargetALSAnimBPToThisSkeleton_Parms, InSkeletonObj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisSkeleton_Statics::NewProp_OutputFolderPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisSkeleton_Statics::NewProp_OutputFolderPath = { "OutputFolderPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALSUtilsEditorLibrary_eventALSUtils_RetargetALSAnimBPToThisSkeleton_Parms, OutputFolderPath), METADATA_PARAMS(Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisSkeleton_Statics::NewProp_OutputFolderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisSkeleton_Statics::NewProp_OutputFolderPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisSkeleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisSkeleton_Statics::NewProp_InSkeletonObj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisSkeleton_Statics::NewProp_OutputFolderPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisSkeleton_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALSUtils|Skeleton|Retarget" },
		{ "ModuleRelativePath", "Public/ALSUtilsEditorLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALSUtilsEditorLibrary, nullptr, "ALSUtils_RetargetALSAnimBPToThisSkeleton", nullptr, nullptr, sizeof(ALSUtilsEditorLibrary_eventALSUtils_RetargetALSAnimBPToThisSkeleton_Parms), Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisSkeleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisSkeleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisSkeleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UALSUtilsEditorLibrary_NoRegister()
	{
		return UALSUtilsEditorLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UALSUtilsEditorLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALSUtilsEditorLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ALSUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UALSUtilsEditorLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddALSNecessitiesToSkeletalMesh, "ALSUtils_AddALSNecessitiesToSkeletalMesh" }, // 3863088526
		{ &Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton, "ALSUtils_AddNewVirtualBonesToSkeleton" }, // 3013835397
		{ &Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddRootPhysicsSphere, "ALSUtils_AddRootPhysicsSphere" }, // 743447761
		{ &Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_PrepareSkeletonForRetargeting, "ALSUtils_PrepareSkeletonForRetargeting" }, // 3912402403
		{ &Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisMesh, "ALSUtils_RetargetALSAnimBPToThisMesh" }, // 1022789011
		{ &Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_RetargetALSAnimBPToThisSkeleton, "ALSUtils_RetargetALSAnimBPToThisSkeleton" }, // 619354491
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALSUtilsEditorLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ALSUtilsEditorLibrary.h" },
		{ "ModuleRelativePath", "Public/ALSUtilsEditorLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALSUtilsEditorLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALSUtilsEditorLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UALSUtilsEditorLibrary_Statics::ClassParams = {
		&UALSUtilsEditorLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UALSUtilsEditorLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UALSUtilsEditorLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UALSUtilsEditorLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UALSUtilsEditorLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UALSUtilsEditorLibrary, 4061738504);
	template<> ALSUTILS_API UClass* StaticClass<UALSUtilsEditorLibrary>()
	{
		return UALSUtilsEditorLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UALSUtilsEditorLibrary(Z_Construct_UClass_UALSUtilsEditorLibrary, &UALSUtilsEditorLibrary::StaticClass, TEXT("/Script/ALSUtils"), TEXT("UALSUtilsEditorLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALSUtilsEditorLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
