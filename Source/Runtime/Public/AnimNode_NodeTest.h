// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Animation/AnimNodeBase.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "AnimNode_NodeTest.generated.h"

#define UE_API ANIMATIONNODETEMPLATERUNTIME_API

USTRUCT(BlueprintInternalUseOnly)
struct UE_API FAnimNode_NodeTest : public FAnimNode_SkeletalControlBase
{
	GENERATED_BODY();

    UPROPERTY(EditAnywhere, Category = "EPW settings", meta = (ToolTip = "Usually called the pelvis."))
    FBoneReference BodyBone;

public:
    virtual void GatherDebugData(FNodeDebugData& DebugData) override;
    virtual void UpdateInternal(const FAnimationUpdateContext& Context) override;
    virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
    virtual void EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms) override;
    virtual bool IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones) override;

private:
    virtual void InitializeBoneReferences(const FBoneContainer& RequiredBones) override;
   
    FCompactPoseBoneIndex BodyBoneIndex{ INDEX_NONE };
	FCompactPoseBoneIndex ParentBoneIndex{ INDEX_NONE };
};

#undef UE_API
