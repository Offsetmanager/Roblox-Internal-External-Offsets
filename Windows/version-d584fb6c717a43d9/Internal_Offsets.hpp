#pragma once
#define REBASE(addr)(addr+reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets
{
    const uintptr_t Print=REBASE(0x91F9A0);
    const uintptr_t OpcodeLookupTable=REBASE(0x610B760);
    const uintptr_t LuaVMLoad=REBASE(0x946650);

    namespace Reflection
    {
        const uintptr_t GetProperty=REBASE(0x7B3970);
        const uintptr_t GetPropertyData=REBASE(0xD65CD0);
        const uintptr_t KTable=REBASE(0x7E73AE0);
        const uintptr_t CastArgs=REBASE(0x2234DD0);
        const uintptr_t TType=0x68;
        const uintptr_t TTypeNumber=0x30;
        const uintptr_t GetSet=0x90;
    }
    namespace Identity
    {
        const uintptr_t GetCapabilities=REBASE(0x8EB520);
    }
    namespace Script
    {
        const uintptr_t ScriptContextResume=REBASE(0x22FA7B0);
        const uintptr_t ScriptContextToResume=0x7D0;
        const uintptr_t RequireBypass=0x800;
    }
    namespace TaskScheduler
    {
        const uintptr_t JobStart=0xC8;
        const uintptr_t JobEnd=0xD0;
        const uintptr_t JobName=0x18;
    }
    namespace Actor
    {
        const uintptr_t ParallelFlag=0x100;
        const uintptr_t TaskDesynchronize=REBASE(0x23F5C00);
        const uintptr_t TaskSynchronize=REBASE(0x23F5620);
    }
    namespace Task
    {
        const uintptr_t Delay=REBASE(0x23F70D0);
        const uintptr_t Desynchronize=REBASE(0x23F5C00);
        const uintptr_t Spawn=REBASE(0x23F6D60);
        const uintptr_t Sync=REBASE(0x23F5620);
        const uintptr_t Wait=REBASE(0x23F73C0);
    }
    namespace Input
    {
        const uintptr_t FireProximityPrompt=REBASE(0x4D92DA0);
        const uintptr_t FireTouchInterest=REBASE(0x1EA41F0);
    }
    namespace Luau
    {
        const uintptr_t Luau_Execute=REBASE(0x95E8C0);
        const uintptr_t LuaD_Throw=REBASE(0x945D80);
    }

    namespace DataModel
    {
        const uintptr_t GameLoaded=0x578;
        const uintptr_t PlaceId=0x190;
    }
    namespace Instance
    {
        const uintptr_t PropertyDescriptorBitFlags=0x8C;
        const uintptr_t ScriptableMask=0x10;
        const uintptr_t ClassDescriptor=0x18;
        const uintptr_t ClassName=0x8;
        const uintptr_t Children=0x70;
        const uintptr_t ChildrenStart=0x70;
        const uintptr_t ChildrenEnd=0x8;
        const uintptr_t Name=0xB0;
        const uintptr_t Overlap=0x1F8;
    }
    namespace BasePart
    {
        const uintptr_t Primitive=0x128;
        const uintptr_t Overlap=0x1F8;
    }
    namespace Bytecode
    {
        const uintptr_t Pointer=0x10;
        const uintptr_t Size=0x20;
        namespace LocalScript
        {
            const uintptr_t ByteCode=0x190;
            const uintptr_t Hash=0x1A0;
        }
        namespace ModuleScript
        {
            const uintptr_t ByteCode=0x138;
            const uintptr_t Hash=0x148;
        }
    }
    namespace Render
    {
        const uintptr_t RenderJobToView=0x1D0;
        const uintptr_t RenderViewToDevice=0x8;
        const uintptr_t SwapChain=0xC8;
    }
    namespace Signal
    {
        const uintptr_t DisconnectConnectOrWasItConnectDisconnect=REBASE(0x2291CD0);
        namespace Connection
        {
            const uintptr_t Next=0x10;
            const uintptr_t Enabled=0x20;
            const uintptr_t Wrapper=0x30;
            const uintptr_t Self=0x38;
        }
        namespace Wrapper
        {
            const uintptr_t Thread=0x28;
            const uintptr_t Function=0x34;
            const uintptr_t Weak=0x60;
            const uintptr_t WeakFallback=0x38;
            const uintptr_t Fallback=0x48;
        }
        namespace Getter
        {
            const uintptr_t Chain=0x68;
            const uintptr_t Self=0x18;
            const uintptr_t Container=0x50;
            const uintptr_t ContainerThread=0x28;
        }
    }
    namespace RakNet
    {
        const uintptr_t HandleConnectionState=REBASE(0x287A4F0);
        const uintptr_t ProcessNetworkPacket=REBASE(0x4296E30);
        const uintptr_t ProcessPacket=REBASE(0x27FCD30);
        const uintptr_t ReportNetworkError=REBASE(0x28829E0);
        const uintptr_t JobPeerSharedPtr=0x1D0;
        const uintptr_t JobPeerEmbedded=0x218;
        const uintptr_t SendSharedVtableIndex=0x14;
        const uintptr_t StreamDataPtr=0x10;
        const uintptr_t StreamBytesUsed=0x30;
        const uintptr_t PacketBytesUsed=0x30;
        const uintptr_t PacketDataPtr=0x38;
        namespace Remote
        {
            const uintptr_t Size=0x1E0;
            const uintptr_t Address=0x10;
            const uintptr_t Port=0x14;
            const uintptr_t State=0x30;
            const uintptr_t Ping=0x38;
            const uintptr_t Ping2=0x3C;
            const uintptr_t Ping3=0x40;
            const uintptr_t Ping4=0x44;
        }
    }
}
