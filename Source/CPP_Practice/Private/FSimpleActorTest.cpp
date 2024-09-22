// Fill out your copyright notice in the Description page of Project Settings.
// ReSharper disable CppMemberFunctionMayBeStatic

#include "FSimpleActorTest.h"
#include "BaseActor.h"
#include "Misc/AutomationTest.h"
#include "Developer/LowLevelTestsRunner/Public/TestCommon/Expectations.h"


IMPLEMENT_SIMPLE_AUTOMATION_TEST(ASimpleActorTest, "CPP_Practice.BaseActor", EAutomationTestFlags::SmokeFilter | EAutomationTestFlags::ApplicationContextMask)

bool FSimpleActorTest::RunTest(const FString& Parameters)
{
	ABaseActor* BaseActor = NewObject<ABaseActor>();

	BaseActor->Health = 100.0f;
	TestEqual("BaseActor Health is 100", BaseActor->Health, 100.0f);

	BaseActor->MultiplyHealth(3);
	TestEqual("BaseActor Health is 300", BaseActor->Health, 300.0f);
	
	return true;
}


FSimpleActorTest::FSimpleActorTest()
{
}

FSimpleActorTest::~FSimpleActorTest()
{
}
