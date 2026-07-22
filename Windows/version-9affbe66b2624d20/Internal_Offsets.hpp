#pragma once
#include <cstdint>
#include <string>
//dumped by phantomteam

namespace InternalOffsets {
    inline std::string ClientVersion = "version-9affbe66b2624d20";

    namespace List {
        inline constexpr uintptr_t RobloxBase = 0x7FF6F12C0000;
        inline constexpr uintptr_t ScriptContextResume = 0x1EFF650;
        inline constexpr uintptr_t GetProperty = 0x27C2D00;
        inline constexpr uintptr_t LuaCStep = 0x7F90F0;
        inline constexpr uintptr_t Print = 0x834D90;
        inline constexpr uintptr_t GcStep = 0x7F8BC0;
        inline constexpr uintptr_t LuaFFreeproto = 0x7F7520;
        inline constexpr uintptr_t LuaMFreearray = 0x7F7B70;
        inline constexpr uintptr_t FreeBlock = 0x7F7A20;
        inline constexpr uintptr_t MarkRoot = 0x7F9650;
        inline constexpr uintptr_t LuaClock = 0x80C9C0;
        inline constexpr uintptr_t LuaMFreegco = 0x7F7BF0;
        inline constexpr uintptr_t NewInstance = 0x233D5E0;
        inline constexpr uintptr_t LuaONilObject = 0x0;
        inline constexpr uintptr_t LuaHDummyNode = 0x5F1A830;
        inline constexpr uintptr_t LuaNewState = 0x0;
        inline constexpr uintptr_t PushInstance = 0x1E8D180;
        inline constexpr uintptr_t LuaFNewLClosure = 0x7F77F0;
        inline constexpr uintptr_t Xref = 0x1E56EEF;
        inline constexpr uintptr_t LuaPushString = 0x7E8270;
        inline constexpr uintptr_t LuaSetField = 0x7E95D0;
        inline constexpr uintptr_t LuaVMLoad = 0x1E97B30;
        inline constexpr uintptr_t NewBlock = 0x7F8190;
        inline constexpr uintptr_t LuaDThrow = 0x7EB990;
        inline constexpr uintptr_t NewClassPage = 0x7F8220;
        inline constexpr uintptr_t NewPage = 0x7F8320;
        inline constexpr uintptr_t LuaTTypenames = 0x5F1A610;

        // Struct & Field Offsets
        inline constexpr uintptr_t LGlobal = 0x60;
        inline constexpr uintptr_t CommonHeaderMemcat = 0x2;
        inline constexpr uintptr_t ProtoCode = 0x28;
        inline constexpr uintptr_t ProtoP = 0x40;
        inline constexpr uintptr_t ProtoK = 0x20;
        inline constexpr uintptr_t ProtoLineInfo = 0x50;
        inline constexpr uintptr_t ProtoLocVars = 0x0;
        inline constexpr uintptr_t ProtoUpvalues = 0x0;
        inline constexpr uintptr_t ProtoDebugInsn = 0x38;
        inline constexpr uintptr_t GGcState = 0x49;
    }
}
