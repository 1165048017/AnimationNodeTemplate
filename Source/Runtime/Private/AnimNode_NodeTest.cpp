// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnimNode_NodeTest.h"
#include "Animation/AnimInstanceProxy.h"
#include "Animation/AnimRootMotionProvider.h"
#include "VisualLogger/VisualLogger.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(AnimNode_NodeTest)

void FAnimNode_NodeTest::InitializeBoneReferences(const FBoneContainer& RequiredBones)
{
    Super::InitializeBoneReferences(RequiredBones);

    BodyBone.Initialize(RequiredBones);

    if (!BodyBone.IsValidToEvaluate(RequiredBones)) return;
	BodyBoneIndex = BodyBone.GetCompactPoseIndex(RequiredBones);
	ParentBoneIndex = RequiredBones.GetParentBoneIndex(BodyBoneIndex);
}

void FAnimNode_NodeTest::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
    FAnimNode_SkeletalControlBase::Initialize_AnyThread(Context);
}

bool FAnimNode_NodeTest::IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones)
{
    return true;
}

void FAnimNode_NodeTest::GatherDebugData(FNodeDebugData& DebugData)
{
    FAnimNode_SkeletalControlBase::GatherDebugData(DebugData);
}

void FAnimNode_NodeTest::UpdateInternal(const FAnimationUpdateContext& Context)
{
    FAnimNode_SkeletalControlBase::UpdateInternal(Context);
}

void FAnimNode_NodeTest::EvaluateSkeletalControl_AnyThread(
    FComponentSpacePoseContext& Output,
    TArray<FBoneTransform>& OutBoneTransforms)
{
    // test calculation of current bone referring to the:
    // 1.Parent Bone global rot, Parent Bone position
    // 2. Current bone local offset relative to Parent Bone also known as local pos
    const FBoneContainer& BoneContainer = Output.Pose.GetPose().GetBoneContainer();

    const FTransform BoneLocalTransform = Output.Pose.GetLocalSpaceTransform(BodyBoneIndex);
    const FTransform ParentBoneLocalTransform = Output.Pose.GetLocalSpaceTransform(ParentBoneIndex);

	const FTransform BoneCSTransform = Output.Pose.GetComponentSpaceTransform(BodyBoneIndex);
	const FTransform ParentBoneCSTransform = Output.Pose.GetComponentSpaceTransform(ParentBoneIndex);

    const FTransform CalculatedCSTransform = BoneLocalTransform * ParentBoneCSTransform;
	//OutBoneTransforms.Add(FBoneTransform(BodyBoneIndex, CalculatedCSTransform));
    UE_LOG(LogTemp, Log, TEXT("Debug BoneCSTransform:%s CalculatedCSTransform:%s"), *BoneCSTransform.ToString(), *CalculatedCSTransform.ToString());

}