#pragma once
#include <cstdint>

// ------------------------------------------------------------
//  Dumper   : Argus 1.5.0
//  Alert    : This is an experimental dumper, so please verify offsets before use.
//  Version  : version-145f189a6a974303
// ------------------------------------------------------------

#define PROTO_LINEINFO_ENC     VMValue2
#define PROTO_ABSLINEINFO_ENC  VMValue2
#define PROTO_TYPEINFO_ENC     VMValue2
#define PROTO_USERDATA_ENC     VMValue2
#define PROTO_LOCVARS_ENC      VMValue1
#define PROTO_DEBUGNAME_ENC    VMValue1
#define PROTO_UPVALUES_ENC     VMValue4
#define PROTO_DEBUGINSN_ENC    VMValue4
#define PROTO_SOURCE_ENC       VMValue3
#define CLOSURE_CONT_ENC       VMValue4
#define CLOSURE_DEBUGNAME_ENC  VMValue1
#define LSTATE_STACKSIZE_ENC   VMValue3
#define TSTRING_HASH_ENC       VMValue4
#define UDATA_META_ENC         VMValue4
