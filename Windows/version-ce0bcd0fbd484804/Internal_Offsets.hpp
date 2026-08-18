// ------------------------------------------------------------
//  Dumper      : Argus 3.0 (Internal Offsets)
//  Owner       : @phantomteam | @kreker757
//  Version     : version-ce0bcd0fbd484804
//  Time Taken  : 60s
// ------------------------------------------------------------
#pragma once
#define REBASE(addr)(addr+reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets
{
    const uintptr_t Print = REBASE(0x80E9A0);
    const uintptr_t OpcodeLookupTable = REBASE(0x6CEFD00);
    const uintptr_t LuaVMLoad = REBASE(0x269AFB0);

    namespace Reflection
    {
    const uintptr_t GetProperty = REBASE(0x7C50F0);
    const uintptr_t GetPropertyData = REBASE(0x2ACD6E0);
    const uintptr_t KTable = REBASE(0x7F47B30);
    const uintptr_t CastArgs = REBASE(0x3F93C30);
    const uintptr_t GetValues = REBASE(0x1464980);
    }

    namespace Identity
    {
    const uintptr_t GetCapabilities = REBASE(0x1C1F930);
    const uintptr_t GetIdentityStructure = REBASE(0x7A9B900);
    const uintptr_t IdentityPtr = REBASE(0x6E3F140);
    }

    namespace Script
    {
    const uintptr_t ScriptContextResume = REBASE(0x40CA400);
    }

    namespace TaskScheduler
    {
    const uintptr_t RawScheduler = REBASE(0x88B86E9);
    }

    namespace Actor
    {
    const uintptr_t TaskDesynchronize = REBASE(0x4182870);
    const uintptr_t TaskSynchronize = REBASE(0x41823F0);
    }

    namespace Task
    {
    const uintptr_t Delay = REBASE(0x4183C00);
    const uintptr_t Desynchronize = REBASE(0x4182870);
    const uintptr_t Spawn = REBASE(0x4183890);
    const uintptr_t Sync = REBASE(0x41823F0);
    }

    namespace Input
    {
    const uintptr_t FireTouchInterest = REBASE(0xA3D570);
    }

    namespace Instance
    {
    const uintptr_t PushInstance = REBASE(0x4012EF0);
    }

    namespace Luau
    {
    const uintptr_t Luau_Execute = REBASE(0x26B5CE0);
    const uintptr_t LuaD_Throw = REBASE(0x2699F70);
    const uintptr_t LuaT_Eventnames = REBASE(0x62BAB28);
    const uintptr_t LuaT_typenames = REBASE(0x62BAAA0);
    }

    namespace Signal
    {
    const uintptr_t DisconnectConnectOrWasItConnectDisconnect = REBASE(0x40B2CD0);
    }

    namespace Lock
    {
    const uintptr_t WriteLock = REBASE(0x59227B0);
    }

    namespace RakNet
    {
    const uintptr_t ProcessNetworkPacket = REBASE(0x28DF870);
    const uintptr_t ReportNetworkError = REBASE(0x4583F90);
    }
}
