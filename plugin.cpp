#include "PCH.h"

SKSEPluginLoad(const SKSE::LoadInterface* skse)
{
    SKSE::Init(skse);

    return true;
}

SKSEPluginVersionData SKSEPlugin_Version = [] {
    SKSEPluginVersionData v{};

    v.PluginVersion(1);
    v.PluginName("EnxyAbilities");
    v.AuthorName("Enxy");

    v.UsesAddressLibrary(true);
    v.HasNoStructUse(true);

    return v;
}();
