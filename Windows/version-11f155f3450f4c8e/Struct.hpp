/*
        ░█████╗░██████╗░░██████╗░██╗░░░██╗░██████╗██╗░░██╗    ██╗░░░██╗░█████╗░
        ██╔══██╗██╔══██╗██╔════╝░██║░░░██║██╔════╝╚██╗██╔╝    ██║░░░██║██╔══██╗
        ███████║██████╔╝██║░░██╗░██║░░░██║╚█████╗░░╚███╔╝░    ╚██╗░██╔╝╚█████╔╝
        ██╔══██║██╔══██╗██║░░╚██╗██║░░░██║░╚═══██╗░██╔██╗░    ░╚████╔╝░██╔══██╗
        ██║░░██║██║░░██║╚██████╔╝╚██████╔╝██████╔╝██╔╝╚██╗    ░░╚██╔╝░░╚█████╔╝
        ╚═╝░░╚═╝╚═╝░░╚═╝░╚═════╝░░╚═════╝░╚═════╝░╚═╝░░╚═╝    ░░░╚═╝░░░░╚════╝░

                        𝓑𝔂 @𝓹𝓱𝓪𝓷𝓽𝓸𝓶𝓽𝓮𝓪𝓶 | @𝓴𝓻𝓮𝓴𝓮𝓻575

                         𝓥𝓮𝓻𝓼𝓲𝓸𝓷: version-11f155f3450f4c8e
                           𝓢𝓾𝓬𝓬𝓮𝓼𝓼: 3         𝓕𝓪𝓲𝓵𝓮𝓭: 0
                                𝓣𝓲𝓶𝓮 𝓣𝓪𝓴𝓮𝓷: 14.21s

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

#define PROTO_LOCVARS_ENC VMValue3
#define PROTO_UPVALUES_ENC VMValue2
#define LSTATE_STACKSIZE_ENC VMValue3

namespace Struct {
    namespace Offsets {
        namespace Proto {
            constexpr uintptr_t anchor = 0x26593C0;
            constexpr uintptr_t size = 0xD8;
            constexpr uintptr_t p = 0x18;
            constexpr uintptr_t p_elem = 0x8;
            constexpr uintptr_t k = 0x20;
            constexpr uintptr_t k_elem = 0x10;
            constexpr uintptr_t code = 0x28;
            constexpr uintptr_t code_elem = 0x4;
            constexpr uintptr_t debuginsn = 0x30;
            constexpr uintptr_t locvars = 0x50;
            constexpr uintptr_t lineinfo = 0x70;
            constexpr uintptr_t upvalues = 0x78;
            constexpr uintptr_t upvalues_elem = 0x8;
            constexpr uintptr_t typeinfo = 0x80;
            constexpr uintptr_t sizetypeinfo = 0x88;
            constexpr uintptr_t sizelineinfo = 0x8C;
            constexpr uintptr_t sizeupvalues = 0x90;
            constexpr uintptr_t sizecode = 0x94;
            constexpr uintptr_t sizek = 0x98;
            constexpr uintptr_t sizep = 0x9C;
            constexpr uintptr_t sizelocvars = 0xAC;
            constexpr uintptr_t feedbackvec = 0xB0;
        }

        namespace lua_State {
            constexpr uintptr_t anchor = 0x265A8E0;
            constexpr uintptr_t size = 0x88;
            constexpr uintptr_t userdata = 0x8;
            constexpr uintptr_t nCcalls = 0x10;
            constexpr uintptr_t cachedslot = 0x14;
            constexpr uintptr_t end_ci = 0x20;
            constexpr uintptr_t base_ci = 0x28;
            constexpr uintptr_t finalizers = 0x30;
            constexpr uintptr_t ci = 0x40;
            constexpr uintptr_t base = 0x48;
            constexpr uintptr_t global = 0x50;
            constexpr uintptr_t top = 0x58;
            constexpr uintptr_t stack = 0x60;
            constexpr uintptr_t stacksize = 0x70;
            constexpr uintptr_t size_ci = 0x74;
            constexpr uintptr_t gt = 0x80;
        }
    }
}
