// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnimGraphNode_NodeTest.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AnimGraphNode_NodeTest)

#define LOCTEXT_NAMESPACE "AnimationNodeTemplate"

UAnimGraphNode_NodeTest::UAnimGraphNode_NodeTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

FText UAnimGraphNode_NodeTest::GetControllerDescription() const
{
	return LOCTEXT("NodeTestTooltip", "Test Node");
}

FText UAnimGraphNode_NodeTest::GetTooltipText() const
{
	return LOCTEXT("NodeTestTooltip", "Test Node");
}

FText UAnimGraphNode_NodeTest::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return GetControllerDescription();
}

FLinearColor UAnimGraphNode_NodeTest::GetNodeTitleColor() const
{
	return FLinearColor(FColor(153.f, 0.f, 0.f));
}

void UAnimGraphNode_NodeTest::Draw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent* SkelMeshComp) const
{
	if (SkelMeshComp)
	{
		
	}
}

#undef LOCTEXT_NAMESPACE
