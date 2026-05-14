#include "PCH.h"

SKSEPluginInfo(
    .Version = { 1, 0, 0, 0 },
    .Name = "EnxyAbilities",
    .Author = "Enxy",
    .SupportEmail = "none",
    .RuntimeCompatibility = SKSE::VersionIndependence::AddressLibrary
);

SKSEPluginLoad(const SKSE::LoadInterface* skse)
{
    SKSE::Init(skse);

    RE::ConsoleLog::GetSingleton()->Print(
        "EnxyAbilities Loaded!"
    );

    return true;
}
