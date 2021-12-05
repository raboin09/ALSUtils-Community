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
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UALSUtilsEditorLibrary::execALSUtils_AddNewVirtualBonesToSkeleton)
	{
		P_GET_OBJECT(USkeleton,Z_Param_InSkeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UALSUtilsEditorLibrary::ALSUtils_AddNewVirtualBonesToSkeleton(Z_Param_InSkeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSUtilsEditorLibrary::execALSUtils_AddRootPhysicsSphere)
	{
		P_GET_OBJECT(UPhysicsAsset,Z_Param_InPhysics);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UALSUtilsEditorLibrary::ALSUtils_AddRootPhysicsSphere(Z_Param_InPhysics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALSUtilsEditorLibrary::execALSUtils_AddALSNecessitiesToSkeletalMesh)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UALSUtilsEditorLibrary::ALSUtils_AddALSNecessitiesToSkeletalMesh(Z_Param_SkeletalMesh);
		P_NATIVE_END;
	}
	void UALSUtilsEditorLibrary::StaticRegisterNativesUALSUtilsEditorLibrary()
	{
		UClass* Class = UALSUtilsEditorLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ALSUtils_AddALSNecessitiesToSkeletalMesh", &UALSUtilsEditorLibrary::execALSUtils_AddALSNecessitiesToSkeletalMesh },
			{ "ALSUtils_AddNewVirtualBonesToSkeleton", &UALSUtilsEditorLibrary::execALSUtils_AddNewVirtualBonesToSkeleton },
			{ "ALSUtils_AddRootPhysicsSphere", &UALSUtilsEditorLibrary::execALSUtils_AddRootPhysicsSphere },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddALSNecessitiesToSkeletalMesh_Statics
	{
		struct ALSUtilsEditorLibrary_eventALSUtils_AddALSNecessitiesToSkeletalMesh_Parms
		{
			USkeletalMesh* SkeletalMesh;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddALSNecessitiesToSkeletalMesh_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALSUtilsEditorLibrary_eventALSUtils_AddALSNecessitiesToSkeletalMesh_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddALSNecessitiesToSkeletalMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddALSNecessitiesToSkeletalMesh_Statics::NewProp_SkeletalMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddALSNecessitiesToSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALSUtils" },
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
			USkeleton* InSkeleton;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSkeleton;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton_Statics::NewProp_InSkeleton = { "InSkeleton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALSUtilsEditorLibrary_eventALSUtils_AddNewVirtualBonesToSkeleton_Parms, InSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALSUtilsEditorLibrary_eventALSUtils_AddNewVirtualBonesToSkeleton_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALSUtilsEditorLibrary_eventALSUtils_AddNewVirtualBonesToSkeleton_Parms), &Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton_Statics::NewProp_InSkeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALSUtils" },
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
			UPhysicsAsset* InPhysics;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddRootPhysicsSphere_Statics::NewProp_InPhysics = { "InPhysics", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALSUtilsEditorLibrary_eventALSUtils_AddRootPhysicsSphere_Parms, InPhysics), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
		{ "Category", "ALSUtils" },
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
		{ &Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddALSNecessitiesToSkeletalMesh, "ALSUtils_AddALSNecessitiesToSkeletalMesh" }, // 654080749
		{ &Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddNewVirtualBonesToSkeleton, "ALSUtils_AddNewVirtualBonesToSkeleton" }, // 509414546
		{ &Z_Construct_UFunction_UALSUtilsEditorLibrary_ALSUtils_AddRootPhysicsSphere, "ALSUtils_AddRootPhysicsSphere" }, // 1590901483
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
	IMPLEMENT_CLASS(UALSUtilsEditorLibrary, 1265410317);
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
