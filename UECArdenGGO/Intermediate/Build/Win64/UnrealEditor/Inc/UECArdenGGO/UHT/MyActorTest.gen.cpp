// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UECArdenGGO/MyActorTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorTest() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UECARDENGGO_API UClass* Z_Construct_UClass_AMyActorTest();
UECARDENGGO_API UClass* Z_Construct_UClass_AMyActorTest_NoRegister();
UPackage* Z_Construct_UPackage__Script_UECArdenGGO();
// End Cross Module References

// Begin Class AMyActorTest
void AMyActorTest::StaticRegisterNativesAMyActorTest()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActorTest);
UClass* Z_Construct_UClass_AMyActorTest_NoRegister()
{
	return AMyActorTest::StaticClass();
}
struct Z_Construct_UClass_AMyActorTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActorTest.h" },
		{ "ModuleRelativePath", "MyActorTest.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActorTest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyActorTest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UECArdenGGO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorTest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActorTest_Statics::ClassParams = {
	&AMyActorTest::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorTest_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActorTest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActorTest()
{
	if (!Z_Registration_Info_UClass_AMyActorTest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActorTest.OuterSingleton, Z_Construct_UClass_AMyActorTest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActorTest.OuterSingleton;
}
template<> UECARDENGGO_API UClass* StaticClass<AMyActorTest>()
{
	return AMyActorTest::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActorTest);
AMyActorTest::~AMyActorTest() {}
// End Class AMyActorTest

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_PC_Documents_GitHub_UnrealEngineCArdenGGO_UECArdenGGO_Source_UECArdenGGO_MyActorTest_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActorTest, AMyActorTest::StaticClass, TEXT("AMyActorTest"), &Z_Registration_Info_UClass_AMyActorTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActorTest), 1197339393U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_Documents_GitHub_UnrealEngineCArdenGGO_UECArdenGGO_Source_UECArdenGGO_MyActorTest_h_1872524354(TEXT("/Script/UECArdenGGO"),
	Z_CompiledInDeferFile_FID_Users_PC_Documents_GitHub_UnrealEngineCArdenGGO_UECArdenGGO_Source_UECArdenGGO_MyActorTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_Documents_GitHub_UnrealEngineCArdenGGO_UECArdenGGO_Source_UECArdenGGO_MyActorTest_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
