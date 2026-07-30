#pragma once
#include <cstdint>

// ------------------------------------------------------------
//  Dumper   : Argus 1.5.0  (Struct / ENC)
//  Alert    : This is an experimental dumper, so please verify offsets before use.
//  Version  : version-145f189a6a974303
// ------------------------------------------------------------

#define CLOSURE_CONT_ENC          VMValue4
#define CLOSURE_DEBUGNAME_ENC     VMValue1
#define LSTATE_STACKSIZE_ENC      VMValue3
#define PROTO_ABSLINEINFO_ENC     VMValue3
#define PROTO_DEBUGINSN_ENC       VMValue1
#define PROTO_DEBUGNAME_ENC       VMValue4
#define PROTO_LINEINFO_ENC        VMValue2
#define PROTO_LOCVARS_ENC         VMValue4
#define PROTO_SOURCE_ENC          VMValue4
#define PROTO_TYPEINFO_ENC        VMValue2
#define PROTO_UPVALUES_ENC        VMValue1
#define PROTO_USERDATA_ENC        VMValue2
#define TSTRING_HASH_ENC          VMValue1
#define UDATA_META_ENC            VMValue1

namespace Offsets
{
    namespace ExtraSpace
    {
        constexpr uintptr_t Pointer = 0x68;
        constexpr uintptr_t Next = 0x0;
        constexpr uintptr_t Container = 0x8;
        constexpr uintptr_t Previous = 0x10;
        constexpr uintptr_t Shared = 0x18;
        constexpr uintptr_t Continuations = 0x0;
        constexpr uintptr_t Capabilities = 0x40;
        constexpr uintptr_t Actor = 0x48;
        constexpr uintptr_t Identity = 0x0;
        constexpr uintptr_t ScriptContext = 0x88;
        constexpr uintptr_t Script = 0x60;
        constexpr uintptr_t Encrypted = 0x90;
        constexpr uintptr_t IsCoreScript = 0x168;
        constexpr uintptr_t ScriptContextToResume = 0x7E8;
        namespace Shared
        {
        constexpr uintptr_t ScriptVMState = 0x20;
        constexpr uintptr_t ScriptContext = 0x28;
        }
    }
}
