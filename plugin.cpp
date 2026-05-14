#include "PCH.h"

SKSEPluginLoad(const SKSE::LoadInterface* skse)
{
    SKSE::Init(skse);

    RE::ConsoleLog::GetSingleton()->Print("EnxyAbilities Loaded!");

    logger::info("EnxyAbilities Loaded!");

    return true;
}
