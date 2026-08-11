#pragma once
#include <cstdint>

// ------------------------------------------------------------
//  Dumper   : ArgusX Beta 1.0
//  Success  : 10
//  Failed   : 0
// ------------------------------------------------------------

#ifndef REBASE
#define REBASE(x) (x)
#endif

namespace Offsets
{
    const uintptr_t Print = REBASE(0x927BB0);
    const uintptr_t ScriptContextResume = REBASE(0x22BAAF0);
    const uintptr_t GetLuaStateForInstance = REBASE(0x7B3D9E);
    const uintptr_t luaD_throw = REBASE(0xB3C530);

    namespace Luau
    {
        const uintptr_t LuaO_NilObject = REBASE(0x610EFF8);
        const uintptr_t LuaH_DummyNode = REBASE(0x610EEC0);
    }

    namespace ExtraSpace
    {
        const uintptr_t RequireBypass = 0x9D0;
    }

    namespace ScriptContext
    {
        const uintptr_t RequireBypass = 0x840;
        const uintptr_t RequireBypassLegacy = 0x9D0;
    }

    namespace Capabilities
    {
        const uintptr_t GetCapabilities = REBASE(0x8F74A0);
    }
}
