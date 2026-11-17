/*
        ░█████╗░██████╗░░██████╗░██╗░░░██╗░██████╗██╗░░██╗  ██╗░░░██╗░█████╗░
        ██╔══██╗██╔══██╗██╔════╝░██║░░░██║██╔════╝╚██╗██╔╝  ██║░░░██║██╔══██╗
        ███████║██████╔╝██║░░██╗░██║░░░██║╚█████╗░░╚███╔╝░  ╚██╗░██╔╝╚██████║
        ██╔══██║██╔══██╗██║░░╚██╗██║░░░██║░╚═══██╗░██╔██╗░  ░╚████╔╝░░╚═══██║
        ██║░░██║██║░░██║╚██████╔╝╚██████╔╝██████╔╝██╔╝╚██╗  ░░╚██╔╝░░░█████╔╝
        ╚═╝░░╚═╝╚═╝░░╚═╝░╚═════╝░░╚═════╝░╚═════╝░╚═╝░░╚═╝  ░░░╚═╝░░░░╚════╝░

                        𝓑𝔂 @𝓹𝓱𝓪𝓷𝓽𝓸𝓶𝓽𝓮𝓪𝓶 | @𝓴𝓻𝓮𝓴𝓮𝓻575

                         𝓥𝓮𝓻𝓼𝓲𝓸𝓷: version-2c6fd5e09aaf4cfa
                           𝓢𝓾𝓬𝓬𝓮𝓼𝓼: 2         𝓕𝓪𝓲𝓵𝓮𝓭: 2
                                𝓣𝓲𝓶𝓮 𝓣𝓪𝓴𝓮𝓷: 70.28s

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

#define PROTO_SOURCE_ENC VMValue2
#define PROTO_SIZEK_ENC VMValue1

namespace Struct {
    namespace Offsets {
        namespace Proto {
            constexpr uintptr_t anchor = 0x2587E10;
            constexpr uintptr_t size = 0xF0;
            constexpr uintptr_t debugname = 0x10;
            constexpr uintptr_t debugname_elem = 0x8;
            constexpr uintptr_t debuginsn = 0x30;
            constexpr uintptr_t source = 0x48;
            constexpr uintptr_t locvars = 0x50;
            constexpr uintptr_t lineinfo = 0x70;
            constexpr uintptr_t lineinfo_elem = 0x10;
            constexpr uintptr_t upvalues = 0x78;
            constexpr uintptr_t upvalues_elem = 0x4;
            constexpr uintptr_t sizetypeinfo = 0x88;
            constexpr uintptr_t sizeupvalues = 0x90;
            constexpr uintptr_t sizek = 0x98;
            constexpr uintptr_t sizesizetypeinfo = 0xA0;
            constexpr uintptr_t sizesource = 0xA4;
            constexpr uintptr_t sizeupvalues = 0xAC;
            constexpr uintptr_t sizedebugname = 0xB4;
            constexpr uintptr_t sizelineinfo = 0xB8;
            constexpr uintptr_t funid = 0xBC;
            constexpr uintptr_t optimized = 0xC0;
        }

        namespace lua_State {
            constexpr uintptr_t anchor = 0x254B930;
            constexpr uintptr_t stack = 0x60;
            constexpr uintptr_t gt = 0x80;
        }
    }
}
