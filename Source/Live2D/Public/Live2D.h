// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FLive2DModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	/** Handle to the test dll we will load */
	void* Live2DLibraryHandle = nullptr;
};

DECLARE_STATS_GROUP(TEXT("Live2D"), STATGROUP_Live2D, STATCAT_Advanced);