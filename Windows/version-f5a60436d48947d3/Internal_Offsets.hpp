// ------------------------------------------------------------
//  Dumper      : Argus 3.0 (Internal Offsets)
//  Alert       : This is an experimental dumper, so please verify offsets before use.
//  Owner       : @phantomteam | @kreker757
//  Version     : version-f5a60436d48947d3
//  Time Taken  : 50s
// ------------------------------------------------------------
#pragma once
#define REBASE(addr)(addr+reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets
{
    const uintptr_t Print = REBASE(0x1C68FE0);
    const uintptr_t GetCurrentThreadId = REBASE(0x4781660);

    namespace Reflection
    {
    const uintptr_t GetProperty = REBASE(0x46A6A60);
    const uintptr_t CastArgs = REBASE(0x3F93510);
    const uintptr_t GetValues = REBASE(0x40F59F0);
    }

    namespace Identity
    {
    const uintptr_t GetCapabilities = REBASE(0x1CA46D0);
    }

    namespace Script
    {
    const uintptr_t ScriptContextResume = REBASE(0x40CBD40);
    const uintptr_t GetModuleFromVMStateMap = REBASE(0x40DB059);
    }

    namespace Actor
    {
    const uintptr_t TaskDesynchronize = REBASE(0x4185DB0);
    const uintptr_t TaskSynchronize = REBASE(0x41859A0);
    }

    namespace Task
    {
    const uintptr_t Delay = REBASE(0x4187180);
    const uintptr_t Desynchronize = REBASE(0x4185DB0);
    const uintptr_t Spawn = REBASE(0x4186E10);
    const uintptr_t Sync = REBASE(0x41859A0);
    const uintptr_t Wait = REBASE(0x4187480);
    }

    namespace Input
    {
    const uintptr_t FireTouchInterest = REBASE(0xA566E0);
    }

    namespace Signal
    {
    const uintptr_t DisconnectConnect = REBASE(0x3FF6360);
    }

    namespace Luau
    {
    const uintptr_t LuaD_Throw = REBASE(0x26ADAD0);
    }

    namespace Lock
    {
    const uintptr_t WriteLock = REBASE(0x479BB30);
    }
}
