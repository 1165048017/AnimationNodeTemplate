// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "AnimNode_NodeTest.h"
#include "AnimGraphNode_SkeletalControlBase.h"
#include "AnimGraphNode_NodeTest.generated.h"

#define UE_API ANIMATIONNODETEMPLATEEDITOR_API

namespace ENodeTitleType { enum Type : int; }

UCLASS(MinimalAPI, Experimental)
class UAnimGraphNode_NodeTest : public UAnimGraphNode_SkeletalControlBase
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(EditAnywhere, Category = Settings)
	FAnimNode_NodeTest Node;

public:
	// UEdGraphNode interface
	UE_API virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	UE_API virtual FLinearColor GetNodeTitleColor() const override;
	UE_API virtual FText GetTooltipText() const override;
	// End of UEdGraphNode interface

protected:
	// UAnimGraphNode_SkeletalControlBase interface
	UE_API virtual FText GetControllerDescription() const override;
	virtual void Draw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent* SkelMeshComp) const override;
	virtual const FAnimNode_SkeletalControlBase* GetNode() const override { return &Node; }
};

#undef UE_API
