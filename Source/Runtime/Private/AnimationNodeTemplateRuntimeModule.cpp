// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnimationNodeTemplateRuntimeModule.h"
#include "Animation/AnimRootMotionProvider.h"
#include "Animation/AnimSequence.h"
#include "Animation/AttributesRuntime.h"
#include "Animation/BuiltInAttributeTypes.h"
#include "Features/IModularFeatures.h"
#include "Modules/ModuleManager.h"

void FAnimationNodeTemplateRuntimeModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FAnimationNodeTemplateRuntimeModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

IMPLEMENT_MODULE(FAnimationNodeTemplateRuntimeModule, AnimationNodeTemplateRuntime);

#undef LOCTEXT_NAMESPACE