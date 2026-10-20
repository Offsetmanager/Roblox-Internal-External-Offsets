/*
        ░█████╗░██████╗░░██████╗░██╗░░░██╗░██████╗██╗░░██╗    ██╗░░░██╗░█████╗░
        ██╔══██╗██╔══██╗██╔════╝░██║░░░██║██╔════╝╚██╗██╔╝    ██║░░░██║██╔══██╗
        ███████║██████╔╝██║░░██╗░██║░░░██║╚█████╗░░╚███╔╝░    ╚██╗░██╔╝╚█████╔╝
        ██╔══██║██╔══██╗██║░░╚██╗██║░░░██║░╚═══██╗░██╔██╗░    ░╚████╔╝░██╔══██╗
        ██║░░██║██║░░██║╚██████╔╝╚██████╔╝██████╔╝██╔╝╚██╗    ░░╚██╔╝░░╚█████╔╝
        ╚═╝░░╚═╝╚═╝░░╚═╝░╚═════╝░░╚═════╝░╚═════╝░╚═╝░░╚═╝    ░░░╚═╝░░░░╚════╝░

                        𝓑𝔂 @𝓹𝓱𝓪𝓷𝓽𝓸𝓶𝓽𝓮𝓪𝓶 | @𝓴𝓻𝓮𝓴𝓮𝓻575

                         𝓥𝓮𝓻𝓼𝓲𝓸𝓷: version-9ac8595712b447a7
                           𝓢𝓾𝓬𝓬𝓮𝓼𝓼: 2         𝓕𝓪𝓲𝓵𝓮𝓭: 0
                                𝓣𝓲𝓶𝓮 𝓣𝓪𝓴𝓮𝓷: 32.31s

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

#define PROTO_DEBUGNAME_ENC VMValue3
#define LSTATE_GT_ENC VMValue3

namespace Struct {
    namespace Offsets {
        namespace Proto {
            constexpr uintptr_t anchor = 0x26B81A0;
            constexpr uintptr_t size = 0xD8;
            constexpr uintptr_t debugname = 0x10;
            constexpr uintptr_t debugname_elem = 0x8;
            constexpr uintptr_t k = 0x20;
            constexpr uintptr_t debuginsn = 0x30;
            constexpr uintptr_t debuginsn_elem = 0x8;
            constexpr uintptr_t userdata = 0x40;
            constexpr uintptr_t source = 0x48;
            constexpr uintptr_t source_elem = 0x10;
            constexpr uintptr_t locvars = 0x50;
            constexpr uintptr_t locvars_elem = 0x4;
            constexpr uintptr_t exectarget = 0x68;
            constexpr uintptr_t upvalues = 0x78;
            constexpr uintptr_t typeinfo = 0x80;
            constexpr uintptr_t sizetypeinfo = 0x88;
            constexpr uintptr_t sizedebugname = 0x8C;
            constexpr uintptr_t sizesource = 0x94;
            constexpr uintptr_t linedefined = 0xA0;
            constexpr uintptr_t sizelocvars = 0xA4;
            constexpr uintptr_t sizedebuginsn = 0xA8;
            constexpr uintptr_t sizelocvars = 0xAC;
            constexpr uintptr_t feedbackvec = 0xB0;
        }

        namespace lua_State {
            constexpr uintptr_t anchor = 0x26B96E0;
            constexpr uintptr_t size = 0x88;
            constexpr uintptr_t userdata = 0x8;
            constexpr uintptr_t nCcalls = 0x10;
            constexpr uintptr_t cachedslot = 0x14;
            constexpr uintptr_t openupval = 0x18;
            constexpr uintptr_t finalizers = 0x30;
            constexpr uintptr_t global = 0x50;
            constexpr uintptr_t stack = 0x60;
            constexpr uintptr_t gt = 0x80;
            constexpr uintptr_t f84 = 0x84;  // unnamed field, offset is authoritative
        }
    }
}
