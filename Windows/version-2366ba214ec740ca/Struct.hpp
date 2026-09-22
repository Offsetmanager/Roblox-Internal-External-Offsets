/*
    _____ __________  ________ ____ ___  _____________  ___   ____   _____________ 
   /  _  \\______   \/  _____/|    |   \/   _____/\   \/  /   \   \ /   /\______  \
  /  /_\  \|       _/   \  ___|    |   /\_____  \  \     /     \   Y   /     /    /
 /    |    \    |   \    \_\  \    |  / /        \ /     \      \     /     /    /
 \____|__  /____|_  /\______  /______/ /_______  //___/\  \      \___/     /____/  
         \/       \/        \/                 \/       \_/                       
                        𝓑𝔂 @𝓹𝓱𝓪𝓷𝓽𝓸𝓶𝓽𝓮𝓪𝓶 | @𝓴𝓻𝓮𝓴𝓮𝓻575
						
                         𝓥𝓮𝓻𝓼𝓲𝓸𝓷: version-2366ba214ec740ca
                           𝓢𝓾𝓬𝓬𝓮𝓼𝓼: 7         𝓕𝓪𝓲𝓵𝓮𝓭: 1
                                𝓣𝓲𝓶𝓮 𝓣𝓪𝓴𝓮𝓷: 249.74s
						
			                𝒱𝑒𝓇𝒾𝒻𝓎 𝑜𝒻𝒻𝓈𝑒𝓉𝓈 𝒷𝑒𝒻𝑜𝓇𝑒 𝓊𝓈𝑒.
*/
#pragma once

#include <cstdint>
#include <type_traits>

template <typename T>
using vm_storage_t = typename std::conditional<(sizeof(T) <= 4), uint32_t, uint64_t>::type;

template <typename T> struct VMValue0 {
    vm_storage_t<T> storage; using S = vm_storage_t<T>;
    inline T decode() const { return (T)(uintptr_t)storage; }
    inline void encode(T v) { storage = (S)(uintptr_t)v; }
};
template <typename T> struct VMValue1 {
    vm_storage_t<T> storage; using S = vm_storage_t<T>;
    inline T decode() const { return (T)(uintptr_t)(S)(storage - (S)(uintptr_t)this); }
    inline void encode(T v) { storage = (S)((S)(uintptr_t)v + (S)(uintptr_t)this); }
};
template <typename T> struct VMValue2 {
    vm_storage_t<T> storage; using S = vm_storage_t<T>;
    inline T decode() const { return (T)(uintptr_t)(S)((S)(uintptr_t)this - storage); }
    inline void encode(T v) { storage = (S)((S)(uintptr_t)this - (S)(uintptr_t)v); }
};
template <typename T> struct VMValue3 {
    vm_storage_t<T> storage; using S = vm_storage_t<T>;
    inline T decode() const { return (T)(uintptr_t)(S)((S)(uintptr_t)this ^ storage); }
    inline void encode(T v) { storage = (S)((S)(uintptr_t)v ^ (S)(uintptr_t)this); }
};
template <typename T> struct VMValue4 {
    vm_storage_t<T> storage; using S = vm_storage_t<T>;
    inline T decode() const { return (T)(uintptr_t)(S)((S)(uintptr_t)this + storage); }
    inline void encode(T v) { storage = (S)((S)(uintptr_t)v - (S)(uintptr_t)this); }
};

#define PROTO_LINEINFO_ENC VMValue3
#define PROTO_LOCVARS_ENC VMValue1
#define PROTO_UPVALUES_ENC VMValue3
#define PROTO_DEBUGINSN_ENC VMValue2
#define PROTO_DEBUGNAME_ENC VMValue4
#define PROTO_TYPEINFO_ENC VMValue1
#define TSTRING_HASH_ENC VMValue2
