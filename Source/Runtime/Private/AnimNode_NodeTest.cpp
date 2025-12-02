// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnimNode_NodeTest.h"
#include "Animation/AnimInstanceProxy.h"
#include "Animation/AnimRootMotionProvider.h"
#include "VisualLogger/VisualLogger.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AnimNode_NodeTest)

void FAnimNode_NodeTest::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	Super::Initialize_AnyThread(Context);
}

void FAnimNode_NodeTest::CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)
{
	Super::CacheBones_AnyThread(Context);
}

void FAnimNode_NodeTest::Update_AnyThread(const FAnimationUpdateContext& Context)
{
	Super::Update_AnyThread(Context);	
}

void FAnimNode_NodeTest::Evaluate_AnyThread(FPoseContext& Output)
{
	Super::Evaluate_AnyThread(Output);
}
