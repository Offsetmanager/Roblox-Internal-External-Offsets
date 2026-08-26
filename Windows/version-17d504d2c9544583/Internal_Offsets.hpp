// ------------------------------------------------------------
//  Dumper      : Argus 3.0 (Internal Offsets)
//  Alert       : This is an experimental dumper, so please verify offsets before use.
//  Owner       : @phantomteam | @kreker757
//  Version     : version-17d504d2c9544583
//  Time Taken  : 48s
// ------------------------------------------------------------
#pragma once
#define REBASE(addr)(addr+reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets
{
    const uintptr_t Print = REBASE(0x1C6A390); //verified
    const uintptr_t LuaVMLoad = REBASE(0x269C3E0);
    const uintptr_t GetCurrentThreadId = REBASE(0x4777820);

    namespace Reflection
    {
    const uintptr_t GetProperty = REBASE(0x7C5DA0);
    const uintptr_t CastArgs = REBASE(0x3F978E0);
    const uintptr_t GetValues = REBASE(0x14EB5B0);
    }

    namespace Identity
    {
    const uintptr_t GetCapabilities = REBASE(0x1C20D60);
    }

    namespace Script
    {
    const uintptr_t ScriptContextResume = REBASE(0x322AF30);
    }

    namespace Actor
    {
    const uintptr_t TaskDesynchronize = REBASE(0x4186520);
    const uintptr_t TaskSynchronize = REBASE(0x41860A0);
    }

    namespace Task
    {
    const uintptr_t Delay = REBASE(0x41878B0);
    const uintptr_t Desynchronize = REBASE(0x4186520);
    const uintptr_t Spawn = REBASE(0x4187540);
    const uintptr_t Sync = REBASE(0x41860A0);
    const uintptr_t Wait = REBASE(0x4187BB0);
    }

    namespace Luau
    {
    const uintptr_t LuaD_Throw = REBASE(0x269B3A0);
    }

    namespace Lock
    {
    const uintptr_t WriteLock = REBASE(0x59264C0);
    }
}
