// ------------------------------------------------------------
//  Dumper      : Argus 3.0 (Internal Offsets)
//  Alert       : This is an experimental dumper, so please verify offsets before use.
//  Owner       : @phantomteam | @kreker757
//  Version     : version-2f3eb5fccfb54d88
//  Time Taken  : 55s
// ------------------------------------------------------------
#pragma once
#define REBASE(addr)(addr+reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets
{
    const uintptr_t Print = REBASE(0x1C55C20);
    const uintptr_t LuaVMLoad = REBASE(0x3FD8B90);

    namespace Reflection
    {
    const uintptr_t GetProperty = REBASE(0x7C4EF0);
    const uintptr_t CastArgs = REBASE(0x3F4B310);
    const uintptr_t GetValues = REBASE(0xF632D0);
    }

    namespace Identity
    {
    const uintptr_t GetCapabilities = REBASE(0x1C0C5F0);
    }

    namespace Script
    {
    const uintptr_t ScriptContextResume = REBASE(0x4081BA0);
    const uintptr_t GetModuleFromVMStateMap = REBASE(0x408FA30);
    }

    namespace Actor
    {
    const uintptr_t TaskDesynchronize = REBASE(0x413A5A0);
    const uintptr_t TaskSynchronize = REBASE(0x413A120);
    }

    namespace Task
    {
    const uintptr_t Delay = REBASE(0x413B940);
    const uintptr_t Desynchronize = REBASE(0x413A5A0);
    const uintptr_t Spawn = REBASE(0x413B5D0);
    const uintptr_t Sync = REBASE(0x413A120);
    const uintptr_t Wait = REBASE(0x413BC40);
    }

    namespace Input
    {
    const uintptr_t FireTouchInterest = REBASE(0xA4E470);
    }

    namespace Luau
    {
    const uintptr_t LuaD_Throw = REBASE(0x26644D0);
    }

    namespace Lock
    {
    const uintptr_t WriteLock = REBASE(0x4744EF0);
    }
}
