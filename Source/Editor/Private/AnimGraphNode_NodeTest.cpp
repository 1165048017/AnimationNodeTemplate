// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnimGraphNode_NodeTest.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AnimGraphNode_NodeTest)

#define LOCTEXT_NAMESPACE "AnimationNodeTemplate"

UAnimGraphNode_NodeTest::UAnimGraphNode_NodeTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

FText UAnimGraphNode_NodeTest::GetTooltipText() const
{
	return LOCTEXT("NodeTestTooltip", "Warp Test Node");
}

FText UAnimGraphNode_NodeTest::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("NodeTest", "Warp Test Node");
}

FLinearColor UAnimGraphNode_NodeTest::GetNodeTitleColor() const
{
	return FLinearColor(FColor(153.f, 0.f, 0.f));
}

#undef LOCTEXT_NAMESPACE
