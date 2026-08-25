// ------------------------------------------------------------
//  Dumper      : Argus 3.0 (Internal Offsets)
//  Alert       : This is an experimental dumper, so please verify offsets before use.
//  Owner       : @phantomteam | @kreker757
//  Version     : version-37a6cf8c67114d6d
//  Time Taken  : 54s
// ------------------------------------------------------------
#pragma once
#define REBASE(addr)(addr+reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets
{
    const uintptr_t Print = REBASE(0x1C68F10);
    const uintptr_t GetCurrentThreadId = REBASE(0x4407290);

    namespace Reflection
    {
    const uintptr_t GetProperty = REBASE(0x7C8AB0);
    const uintptr_t CastArgs = REBASE(0x26DF9F0);
    const uintptr_t GetValues = REBASE(0x1481390);
    }

    namespace Identity
    {
    const uintptr_t GetCapabilities = REBASE(0x1CA4600);
    }

    namespace Script
    {
    const uintptr_t ScriptContextResume = REBASE(0x3710F70);
    const uintptr_t GetModuleFromVMStateMap = REBASE(0x40D9280);
    }

    namespace Actor
    {
    const uintptr_t TaskDesynchronize = REBASE(0x4185290);
    const uintptr_t TaskSynchronize = REBASE(0x4184E80);
    }

    namespace Task
    {
    const uintptr_t Delay = REBASE(0x4186660);
    const uintptr_t Desynchronize = REBASE(0x4185290);
    const uintptr_t Spawn = REBASE(0x41862F0);
    const uintptr_t Sync = REBASE(0x4184E80);
    const uintptr_t Wait = REBASE(0x4186960);
    }

    namespace Input
    {
    const uintptr_t FireTouchInterest = REBASE(0xA56660);
    }

    namespace Luau
    {
    const uintptr_t LuaD_Throw = REBASE(0x26ACFA0);
    }

    namespace Lock
    {
    const uintptr_t WriteLock = REBASE(0x479B010);
    }
}
