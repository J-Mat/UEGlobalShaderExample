// Copyright Epic Games, Inc. All Rights Reserved.

#include "Foo.h"

#define LOCTEXT_NAMESPACE "FFooModule"

void FFooModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
		// Maps virtual shader source directory to actual shaders directory on disk.
	FString ShaderDirectory = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shaders/Private"));
	AddShaderSourceDirectoryMapping("/CustomShaders", ShaderDirectory);
}

void FFooModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FFooModule, Foo)