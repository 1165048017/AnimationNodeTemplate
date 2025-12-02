// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Animation/AnimNodeBase.h"
#include "AnimNode_NodeTest.generated.h"

#define UE_API ANIMATIONNODETEMPLATERUNTIME_API

USTRUCT(Experimental, BlueprintInternalUseOnly)
struct FAnimNode_NodeTest : public FAnimNode_Base
{
	GENERATED_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Links, meta = (DisplayPriority = 0))
	TArray<FVector> LegTargets;

public:
	// FAnimNode_Base interface
	UE_API virtual void Update_AnyThread(const FAnimationUpdateContext& Context) override;
	UE_API virtual void Evaluate_AnyThread(FPoseContext& Output) override;
	UE_API virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
	UE_API virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context) override;
	// End of FAnimNode_Base interface
};

#undef UE_API
