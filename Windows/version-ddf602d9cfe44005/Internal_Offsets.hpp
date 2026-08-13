// ------------------------------------------------------------
//  Dumper      : Argus 3.0 (Internal Offsets)
//  Owner       : @phantomteam | @kreker757
//  Version     : version-ddf602d9cfe44005
//  Time Taken  : 52s
// ------------------------------------------------------------
#pragma once
#define REBASE(addr)(addr+reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets
{
    const uintptr_t Print = REBASE(0x92C340);
    const uintptr_t OpcodeLookupTable = REBASE(0x6B83740);
    const uintptr_t LuaVMLoad = REBASE(0xB41500);
    const uintptr_t GetLuaStateForInstance = REBASE(0xB32BF0);
    const uintptr_t GetGlobalState = REBASE(0xB46CB0);

    namespace Reflection
    {
    const uintptr_t GetProperty = REBASE(0x7BF3C0);
    const uintptr_t KTable = REBASE(0x7E8C7A0);
    const uintptr_t CastArgs = REBASE(0x21F5070);
    const uintptr_t GetValues = REBASE(0x21F5760);
    }

    namespace Identity
    {
    const uintptr_t GetCapabilities = REBASE(0x8F7FD0);
    const uintptr_t GetIdentityStructure = REBASE(0x7A18900);
    const uintptr_t IdentityPtr = REBASE(0x6CB1738);
    }

    namespace Script
    {
    const uintptr_t ScriptContextResume = REBASE(0x22BBA10);
    const uintptr_t GetVMState = REBASE(0x2D1E6E0);
    }

    namespace TaskScheduler
    {
    const uintptr_t RawScheduler = REBASE(0x88B64C0);
    }

    namespace Actor
    {
    const uintptr_t TaskDesynchronize = REBASE(0x23B4DE0);
    const uintptr_t TaskSynchronize = REBASE(0x23B4960);
    }

    namespace Task
    {
    const uintptr_t Delay = REBASE(0x23B6180);
    const uintptr_t Desynchronize = REBASE(0x23B4DE0);
    const uintptr_t Sync = REBASE(0x23B4960);
    const uintptr_t Wait = REBASE(0x23B6480);
    }

    namespace Input
    {
    const uintptr_t FireTouchInterest = REBASE(0x1E62820);
    }

    namespace Luau
    {
    const uintptr_t Luau_Execute = REBASE(0xB65990);
    const uintptr_t LuaD_Throw = REBASE(0xB40C30);
    const uintptr_t luaC_step = REBASE(0xB33DC0);
    const uintptr_t luaO_nilobject = REBASE(0x8B32C50);
    const uintptr_t LuaT_Eventnames = REBASE(0x610EF68);
    const uintptr_t LuaT_typenames = REBASE(0x610EEE0);
    }

    namespace Signal
    {
    const uintptr_t DisconnectConnectOrWasItConnectDisconnect = REBASE(0x22D8430);
    }

    namespace Lock
    {
    const uintptr_t WriteLock = REBASE(0x58BA480);
    }

    namespace RakNet
    {
    const uintptr_t ProcessNetworkPacket = REBASE(0x499B730);
    const uintptr_t ReportNetworkError = REBASE(0x29135D0);
    }
}
