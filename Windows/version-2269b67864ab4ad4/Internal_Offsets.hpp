#pragma once
#define REBASE(addr)(addr+reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets
    {
    const uintptr_t Print=REBASE(0x927BB0);
    const uintptr_t OpcodeLookupTable=REBASE(0x6B835E0);
    const uintptr_t LuaVMLoad=REBASE(0xB3CE00);
    const uintptr_t GetLuaState=REBASE(0x22C2E90);
    const uintptr_t GetCurrentThreadId=REBASE(0x2D01DF0);
    }

    namespace Reflection
    {
        const uintptr_t GetProperty=REBASE(0x7BF3C0);
        const uintptr_t GetPropertyData=REBASE(0xD6BCB0);
        const uintptr_t KTable=REBASE(0x7E8C7A0);
        const uintptr_t GetValues=REBASE(0x21F4840);
    }

    namespace Identity
    {
        const uintptr_t GetCapabilities=REBASE(0x8F74A0);
        const uintptr_t GetIdentityStructure=REBASE(0x7A18900);
        const uintptr_t IdentityPtr=REBASE(0x6CB1590);
    }

    namespace Script
    {
        const uintptr_t ScriptContextResume=REBASE(0x22BAAF0);
        const uintptr_t GetVMState=REBASE(0x2D1D820);
        const uintptr_t GetModuleFromVMStateMap=REBASE(0x22F4ED0);
    }

    namespace TaskScheduler
    {
        const uintptr_t RawScheduler=REBASE(0x88B6710);
    }

    namespace Actor
    {
        const uintptr_t TaskDesynchronize=REBASE(0x23B3EC0);
        const uintptr_t TaskSynchronize=REBASE(0x23B3A40);
    }

    namespace Task
    {
        const uintptr_t Delay=REBASE(0x23B5260);
        const uintptr_t Desynchronize=REBASE(0x23B3EC0);
        const uintptr_t Spawn=REBASE(0x23B4EF0);
        const uintptr_t Sync=REBASE(0x23B3A40);
    }

    namespace Input
    {
        const uintptr_t FireTouchInterest=REBASE(0x1E45D10);
    }

    namespace Instance
    {
        const uintptr_t PushInstance=REBASE(0x22FD3E0);
    }

    namespace Luau
    {
        const uintptr_t LuaD_Throw=REBASE(0xB3C530);
        const uintptr_t luaO_nilobject=REBASE(0x8B32EA0);
        const uintptr_t LuaT_Eventnames=REBASE(0x610EF68);
    }

    namespace Lock
    {
        const uintptr_t WriteLock=REBASE(0x58BA500);
    }

    namespace RakNet
    {
        const uintptr_t ProcessNetworkPacket=REBASE(0x499B7B0);
        const uintptr_t ReportNetworkError=REBASE(0x2912710);
    }
}
