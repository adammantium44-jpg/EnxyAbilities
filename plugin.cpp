#include "PCH.h"

SKSEPluginLoad(const SKSE::LoadInterface* skse)
{
    SKSE::Init(skse);

    RE::ConsoleLog::GetSingleton()->Print("EnxyAbilities Loaded!");

    SKSE::log::info("EnxyAbilities Loaded!");

    return true;
}
