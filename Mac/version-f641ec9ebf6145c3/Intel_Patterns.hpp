#pragma once
#include <cstddef>
#include <cstdint>

namespace Patterns
{
    inline constexpr const char* luau = "0.743.0.7431129";

    struct Sig {
        const char* bytes;
        const char* mask;
        std::size_t size;
        int matches;
    };

    namespace Memory {
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 50 41 89 ce 48 89 d3 49 89 f7
        inline constexpr Sig luaM_freearray = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x50\x41\x89\xce\x48\x89\xd3\x49\x89\xf7", "xxxxxxxxxxxxxxxxxxxxxxx", 23, 1 };
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 50 4d 89 c7 48 89 d3 49 89 f5 49 89 fc 4c 8b 77 50 49 8b 86 68 06 00 00 48 85 c0 0f 85 be 00 00 00
        inline constexpr Sig luaM_freegco = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x50\x4d\x89\xc7\x48\x89\xd3\x49\x89\xf5\x49\x89\xfc\x4c\x8b\x77\x50\x49\x8b\x86\x68\x06\x00\x00\x48\x85\xc0\x0f\x85\xbe\x00\x00\x00", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", 46, 1 };
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 48 83 ec 18 44 89 45 d0 89 4d cc 41 89 d0 49 89 f6 49 89 fc 4c 8b 7f 50 48 8d 46 ff 48 3d ff 03 00 00
        inline constexpr Sig luaM_newgco = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x48\x83\xec\x18\x44\x89\x45\xd0\x89\x4d\xcc\x41\x89\xd0\x49\x89\xf6\x49\x89\xfc\x4c\x8b\x7f\x50\x48\x8d\x46\xff\x48\x3d\xff\x03\x00\x00", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", 47, 2 };
        // 55 48 89 e5 48 83 ec 10 48 8d 05 19? f8? 08? 04? 48 89 45 f8 48 c7 c6 fc eb f6 ff
        inline constexpr Sig luaM_toobig = { "\x55\x48\x89\xe5\x48\x83\xec\x10\x48\x8d\x05\x19\xf8\x08\x04\x48\x89\x45\xf8\x48\xc7\xc6\xfc\xeb\xf6\xff", "xxxxxxxxxxx????xxxxxxxxxxx", 26, 1 };
        // 55 48 89 e5 4c 8b 49 10
        inline constexpr Sig luaM_visitgco = { "\x55\x48\x89\xe5\x4c\x8b\x49\x10", "xxxxxxxx", 8, 1 };
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 50 41 89 d7 48 89 f3 49 89 fe 4c 8b 6f 50
        inline constexpr Sig newblock = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x50\x41\x89\xd7\x48\x89\xf3\x49\x89\xfe\x4c\x8b\x6f\x50", "xxxxxxxxxxxxxxxxxxxxxxxxxxx", 27, 1 };
        // 55 48 89 e5 41 56 53 49 89 d1 48 89 f3
        inline constexpr Sig newclasspage = { "\x55\x48\x89\xe5\x41\x56\x53\x49\x89\xd1\x48\x89\xf3", "xxxxxxxxxxxxx", 13, 1 };
        // e8 9e? 0d? 00? 00? 48 89 de 44 8b 45 d4 48 63 48 30 48 85 c9 78 7d 48 8d 1c 08 48 83 c3 40 8b 50 24 29 d1 89 48 30 ff 40 34 48 83 78 28 00 75 35
        inline constexpr Sig newgcoblock = { "\xe8\x9e\x0d\x00\x00\x48\x89\xde\x44\x8b\x45\xd4\x48\x63\x48\x30\x48\x85\xc9\x78\x7d\x48\x8d\x1c\x08\x48\x83\xc3\x40\x8b\x50\x24\x29\xd1\x89\x48\x30\xff\x40\x34\x48\x83\x78\x28\x00\x75\x35", "x????xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", 47, 2 };
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 50 45 89 c6 41 89 cf 41 89 d4 48 89 f3 49 89 fd 48 8b 47 50 48 63 ca 48 8b 78 40
        inline constexpr Sig newpage = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x50\x45\x89\xc6\x41\x89\xcf\x41\x89\xd4\x48\x89\xf3\x49\x89\xfd\x48\x8b\x47\x50\x48\x63\xca\x48\x8b\x78\x40", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", 40, 1 };
    }

    namespace Luau {
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 48 83 ec 68 49 89 d5 49 89 f7 48 89 fb 4c 8b 67 50
        inline constexpr Sig LuaVMLoad = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x48\x83\xec\x68\x49\x89\xd5\x49\x89\xf7\x48\x89\xfb\x4c\x8b\x67\x50", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", 30, 1 };
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 48 81 ec c8 01 00 00 48 8b 05 81? 4e? 4b? 04? 48 8b 00 48 89 45 d0 48 8b 5e 30
        inline constexpr Sig loadsafe = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x48\x81\xec\xc8\x01\x00\x00\x48\x8b\x05\x81\x4e\x4b\x04\x48\x8b\x00\x48\x89\x45\xd0\x48\x8b\x5e\x30", "xxxxxxxxxxxxxxxxxxxxxxx????xxxxxxxxxxx", 38, 1 };
        // 55 48 89 e5 81 fe ee d8 ff ff
        inline constexpr Sig luaA_toobject = { "\x55\x48\x89\xe5\x81\xfe\xee\xd8\xff\xff", "xxxxxxxxxx", 10, 1 };
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 48 83 ec 18 41 89 f7 48 89 7d d0
        inline constexpr Sig luaC_step = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x48\x83\xec\x18\x41\x89\xf7\x48\x89\x7d\xd0", "xxxxxxxxxxxxxxxxxxxxxxxx", 24, 1 };
        // 55 48 89 e5 41 57 41 56 53 50 48 89 f0 49 89 fe 31 db
        inline constexpr Sig luaD_rawrunprotected = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x53\x50\x48\x89\xf0\x49\x89\xfe\x31\xdb", "xxxxxxxxxxxxxxxxxx", 18, 1 };
        // 55 48 89 e5 41 56 53 89 f3 49 89 fe bf 18 00 00 00 e8 07? 71? 1c? 03? 48 8d 0d ba? d5? 94? 04?
        inline constexpr Sig luaD_throw = { "\x55\x48\x89\xe5\x41\x56\x53\x89\xf3\x49\x89\xfe\xbf\x18\x00\x00\x00\xe8\x07\x71\x1c\x03\x48\x8d\x0d\xba\xd5\x94\x04", "xxxxxxxxxxxxxxxxxx????xxx????", 29, 1 };
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 50 49 89 ce 49 89 d7 89 f3 49 89 fc
        inline constexpr Sig luaF_newLclosure = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x50\x49\x89\xce\x49\x89\xd7\x89\xf3\x49\x89\xfc", "xxxxxxxxxxxxxxxxxxxxxxxxx", 25, 1 };
        // 55 48 89 e5 41 57 41 56 41 54 53 48 89 f3 49 89 fe 48 8b 4f 18
        inline constexpr Sig luaF_newUpval = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x54\x53\x48\x89\xf3\x49\x89\xfe\x48\x8b\x4f\x18", "xxxxxxxxxxxxxxxxxxxxx", 21, 1 };
        // 55 48 89 e5 41 56 53 48 89 fb 0f b6 57 06 45 31 f6
        inline constexpr Sig luaF_newproto = { "\x55\x48\x89\xe5\x41\x56\x53\x48\x89\xfb\x0f\xb6\x57\x06\x45\x31\xf6", "xxxxxxxxxxxxxxxxx", 17, 1 };
        // 55 48 89 e5 41 56 53 48 81 ec d0 02 00 00 49 89 f2
        inline constexpr Sig luaG_runerror = { "\x55\x48\x89\xe5\x41\x56\x53\x48\x81\xec\xd0\x02\x00\x00\x49\x89\xf2", "xxxxxxxxxxxxxxxxx", 17, 1 };
        // 55 48 89 e5 41 57 41 56 41 54 53 48 89 f3 49 89 ff 0f b6 57 06
        inline constexpr Sig luaH_clone = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x54\x53\x48\x89\xf3\x49\x89\xff\x0f\xb6\x57\x06", "xxxxxxxxxxxxxxxxxxxxx", 21, 1 };
        // 55 48 89 e5 41 57 41 56 41 54 53 89 d3 41 89 f4 49 89 fe 0f b6 57 06
        inline constexpr Sig luaH_new = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x54\x53\x89\xd3\x41\x89\xf4\x49\x89\xfe\x0f\xb6\x57\x06", "xxxxxxxxxxxxxxxxxxxxxxx", 23, 1 };
        // 55 48 89 e5 41 57 41 56 53 50 48 89 d3 41 89 f6 49 89 ff e8 54? 00? 00? 00? 48 85 c0 75 26
        inline constexpr Sig luaL_argerrorL = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x53\x50\x48\x89\xd3\x41\x89\xf6\x49\x89\xff\xe8\x54\x00\x00\x00\x48\x85\xc0\x75\x26", "xxxxxxxxxxxxxxxxxxxx????xxxxx", 29, 1 };
        // 55 48 89 e5 41 56 53 89 f3 49 89 fe e8 e7? bd? ff? ff? 48 85 c0 74 05 5b 41 5e 5d c3 4c 89 f7 89 de ba 06 00 00 00
        inline constexpr Sig luaL_checklstring = { "\x55\x48\x89\xe5\x41\x56\x53\x89\xf3\x49\x89\xfe\xe8\xe7\xbd\xff\xff\x48\x85\xc0\x74\x05\x5b\x41\x5e\x5d\xc3\x4c\x89\xf7\x89\xde\xba\x06\x00\x00\x00", "xxxxxxxxxxxxx????xxxxxxxxxxxxxxxxxxxx", 37, 1 };
        // 55 48 89 e5 41 57 41 56 53 48 81 ec d8 00 00 00 49 89 f6 48 89 fb 48 8d b5 10 ff ff ff 48 89 56 10
        inline constexpr Sig luaL_errorL = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x53\x48\x81\xec\xd8\x00\x00\x00\x49\x89\xf6\x48\x89\xfb\x48\x8d\xb5\x10\xff\xff\xff\x48\x89\x56\x10", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", 33, 1 };
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 50 89 cb 49 89 d7 49 89 fe
        inline constexpr Sig luaL_findtable = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x50\x89\xcb\x49\x89\xd7\x49\x89\xfe", "xxxxxxxxxxxxxxxxxxxxxx", 22, 1 };
        // 55 48 89 e5 41 57 41 56 41 54 53 48 83 ec 10 49 89 d6 48 89 fb 48 85 f6
        inline constexpr Sig luaL_register = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x54\x53\x48\x83\xec\x10\x49\x89\xd6\x48\x89\xfb\x48\x85\xf6", "xxxxxxxxxxxxxxxxxxxxxxxx", 24, 1 };
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 50 48 89 d3 41 89 f6 49 89 ff e8 ce? fe? ff? ff? 49 89 c4
        inline constexpr Sig luaL_typerrorL = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x50\x48\x89\xd3\x41\x89\xf6\x49\x89\xff\xe8\xce\xfe\xff\xff\x49\x89\xc4", "xxxxxxxxxxxxxxxxxxxxxxxx????xxx", 31, 1 };
        // 55 48 89 e5 41 57 41 56 53 50 49 89 d7 49 89 f6 48 89 fb 0f b6 02
        inline constexpr Sig luaO_chunkid = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x53\x50\x49\x89\xd7\x49\x89\xf6\x48\x89\xfb\x0f\xb6\x02", "xxxxxxxxxxxxxxxxxxxxxx", 22, 1 };
        // 55 48 89 e5 41 57 41 56 53 50 48 89 f3 49 89 fe 4c 8d 7d e0 4c 89 fe
        inline constexpr Sig luaO_str2d = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x53\x50\x48\x89\xf3\x49\x89\xfe\x4c\x8d\x7d\xe0\x4c\x89\xfe", "xxxxxxxxxxxxxxxxxxxxxxx", 23, 1 };
        // 55 48 89 e5 41 57 41 56 41 54 53 48 89 fb 45 31 ff 4c 8d 25 b4? 9d? 93? 04?
        inline constexpr Sig luaT_init = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x54\x53\x48\x89\xfb\x45\x31\xff\x4c\x8d\x25\xb4\x9d\x93\x04", "xxxxxxxxxxxxxxxxxxxx????", 24, 1 };
        // 55 48 89 e5 e8 68? ff? ff? ff? 48 83 c0 18
        inline constexpr Sig luaT_objtypename = { "\x55\x48\x89\xe5\xe8\x68\xff\xff\xff\x48\x83\xc0\x18", "xxxxx????xxxx", 13, 1 };
        // 55 48 89 e5 8b 47 0c 3b 46 0c
        inline constexpr Sig luaV_equal = { "\x55\x48\x89\xe5\x8b\x47\x0c\x3b\x46\x0c", "xxxxxxxxxx", 10, 1 };
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 48 83 ec 18 48 89 4d c8 49 89 d5 49 89 f4
        inline constexpr Sig luaV_gettable = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x48\x83\xec\x18\x48\x89\x4d\xc8\x49\x89\xd5\x49\x89\xf4", "xxxxxxxxxxxxxxxxxxxxxxxxxxx", 27, 1 };
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 50 45 89 c7 41 89 cc 49 89 d5 49 89 fe
        inline constexpr Sig luaV_lessthan = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x50\x45\x89\xc7\x41\x89\xcc\x49\x89\xd5\x49\x89\xfe", "xxxxxxxxxxxxxxxxxxxxxxxxxx", 26, 1 };
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 48 83 ec 38 48 89 4d c0 48 89 55 c8
        inline constexpr Sig luaV_settable = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x48\x83\xec\x38\x48\x89\x4d\xc0\x48\x89\x55\xc8", "xxxxxxxxxxxxxxxxxxxxxxxxx", 25, 1 };
        // 55 48 89 e5 5d e9 a6? 70? 1c? 03?
        inline constexpr Sig lua_eception = { "\x55\x48\x89\xe5\x5d\xe9\xa6\x70\x1c\x03", "xxxxxx????", 10, 25103 };
        // 55 48 89 e5 41 57 41 56 41 54 53 48 89 f0 4c 8b 77 50
        inline constexpr Sig lua_encodepointer = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x54\x53\x48\x89\xf0\x4c\x8b\x77\x50", "xxxxxxxxxxxxxxxxxx", 18, 1 };
        // 55 48 89 e5 41 56 53 48 8b 5f 68 48 85 db 74 2e
        inline constexpr Sig lua_namecallatom = { "\x55\x48\x89\xe5\x41\x56\x53\x48\x8b\x5f\x68\x48\x85\xdb\x74\x2e", "xxxxxxxxxxxxxxxx", 16, 1 };
        // 55 48 89 e5 41 57 41 56 41 54 53 49 89 f6 49 89 ff 44 8a 25 db? da? bc? 04?
        inline constexpr Sig lua_newstate = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x54\x53\x49\x89\xf6\x49\x89\xff\x44\x8a\x25\xdb\xda\xbc\x04", "xxxxxxxxxxxxxxxxxxxx????", 24, 1 };
        // 55 48 89 e5 41 56 53 48 81 ec d0 00 00 00 48 89 f3 49 89 fe 48 89 95 30 ff ff ff 48 89 8d 38 ff ff ff 4c 89 85 40 ff ff ff 4c 89 8d 48 ff ff ff
        inline constexpr Sig lua_pushfstringL = { "\x55\x48\x89\xe5\x41\x56\x53\x48\x81\xec\xd0\x00\x00\x00\x48\x89\xf3\x49\x89\xfe\x48\x89\x95\x30\xff\xff\xff\x48\x89\x8d\x38\xff\xff\xff\x4c\x89\x85\x40\xff\xff\xff\x4c\x89\x8d\x48\xff\xff\xff", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", 48, 3 };
        // 55 48 89 e5 41 57 41 56 53 50 48 89 d3 49 89 f6 49 89 ff 48 8b 47 50 48 8b 48 08
        inline constexpr Sig lua_pushvfstring = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x53\x50\x48\x89\xd3\x49\x89\xf6\x49\x89\xff\x48\x8b\x47\x50\x48\x8b\x48\x08", "xxxxxxxxxxxxxxxxxxxxxxxxxxx", 27, 1 };
        // 55 48 89 e5 53 50 0f b6 47 03
        inline constexpr Sig lua_rawcheckstack = { "\x55\x48\x89\xe5\x53\x50\x0f\xb6\x47\x03", "xxxxxxxxxx", 10, 1 };
        // 55 48 89 e5 41 56 53 48 89 fb 48 8b 77 60 e8 fc? 6c? ff? ff?
        inline constexpr Sig lua_resetthread = { "\x55\x48\x89\xe5\x41\x56\x53\x48\x89\xfb\x48\x8b\x77\x60\xe8\xfc\x6c\xff\xff", "xxxxxxxxxxxxxxx????", 19, 1 };
        // 55 48 89 e5 48 8b 77 58 48 2b 77 48
        inline constexpr Sig lua_yield = { "\x55\x48\x89\xe5\x48\x8b\x77\x58\x48\x2b\x77\x48", "xxxxxxxxxxxx", 12, 1 };
        // 55 48 89 e5 41 56 53 48 89 fb be ee d8 ff ff
        inline constexpr Sig luaopen_base = { "\x55\x48\x89\xe5\x41\x56\x53\x48\x89\xfb\xbe\xee\xd8\xff\xff", "xxxxxxxxxxxxxxx", 15, 1 };
        // 55 48 89 e5 41 57 41 56 53 50 48 89 fb 48 89 fe
        inline constexpr Sig luaopen_math = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x53\x50\x48\x89\xfb\x48\x89\xfe", "xxxxxxxxxxxxxxxx", 16, 1 };
        // 55 48 89 e5 48 8d 35 3a? 7b? 15? 04? 48 8d 15 5b? 3c? 94? 04? e8 15? bb? fe? ff? b8 01 00 00 00 5d c3
        inline constexpr Sig luaopen_os = { "\x55\x48\x89\xe5\x48\x8d\x35\x3a\x7b\x15\x04\x48\x8d\x15\x5b\x3c\x94\x04\xe8\x15\xbb\xfe\xff\xb8\x01\x00\x00\x00\x5d\xc3", "xxxxxxx????xxx????x????xxxxxxx", 30, 4 };
        // 55 48 89 e5 80 7f 04 01 75 06
        inline constexpr Sig luau_execute = { "\x55\x48\x89\xe5\x80\x7f\x04\x01\x75\x06", "xxxxxxxxxx", 10, 1 };
    }

    namespace LuaLib {
        // 55 48 89 e5 41 56 53 48 83 ec 10 48 89 fb be 01 00 00 00 e8 59? eb? ff? ff? 48 89 df
        inline constexpr Sig luaB_assert = { "\x55\x48\x89\xe5\x41\x56\x53\x48\x83\xec\x10\x48\x89\xfb\xbe\x01\x00\x00\x00\xe8\x59\xeb\xff\xff\x48\x89\xdf", "xxxxxxxxxxxxxxxxxxxx????xxx", 27, 1 };
        // 55 48 89 e5 41 56 53 48 89 fb be 02 00 00 00 ba 01 00 00 00
        inline constexpr Sig luaB_error = { "\x55\x48\x89\xe5\x41\x56\x53\x48\x89\xfb\xbe\x02\x00\x00\x00\xba\x01\x00\x00\x00", "xxxxxxxxxxxxxxxxxxxx", 20, 1 };
        // 55 48 89 e5 53 50 48 89 fb be 03 00 00 00 31 d2
        inline constexpr Sig luaB_gcinfo = { "\x55\x48\x89\xe5\x53\x50\x48\x89\xfb\xbe\x03\x00\x00\x00\x31\xd2", "xxxxxxxxxxxxxxxx", 16, 1 };
        // 55 48 89 e5 53 50 48 89 fb be 01 00 00 00 e8 5d? 07? 00? 00? 48 89 df be ff ff ff ff
        inline constexpr Sig luaB_getfenv = { "\x55\x48\x89\xe5\x53\x50\x48\x89\xfb\xbe\x01\x00\x00\x00\xe8\x5d\x07\x00\x00\x48\x89\xdf\xbe\xff\xff\xff\xff", "xxxxxxxxxxxxxxx????xxxxxxxx", 27, 1 };
        // 55 48 89 e5 53 50 48 89 fb be 01 00 00 00 e8 f1? e9? ff? ff? 48 89 df be 01 00 00 00 e8 7a? bb? ff? ff? 85 c0
        inline constexpr Sig luaB_getmetatable = { "\x55\x48\x89\xe5\x53\x50\x48\x89\xfb\xbe\x01\x00\x00\x00\xe8\xf1\xe9\xff\xff\x48\x89\xdf\xbe\x01\x00\x00\x00\xe8\x7a\xbb\xff\xff\x85\xc0", "xxxxxxxxxxxxxxx????xxxxxxxxx????xx", 34, 1 };
        // 55 48 89 e5 41 56 53 48 83 ec 10 48 89 fb be 01 00 00 00 e8 6b? 9e? ff? ff? ff c0
        inline constexpr Sig luaB_newproxy = { "\x55\x48\x89\xe5\x41\x56\x53\x48\x83\xec\x10\x48\x89\xfb\xbe\x01\x00\x00\x00\xe8\x6b\x9e\xff\xff\xff\xc0", "xxxxxxxxxxxxxxxxxxxx????xx", 26, 1 };
        // 55 48 89 e5 41 56 53 48 89 fb be 01 00 00 00 ba 07 00 00 00 e8 7e? f0? ff? ff? 41 be 02 00 00 00
        inline constexpr Sig luaB_next = { "\x55\x48\x89\xe5\x41\x56\x53\x48\x89\xfb\xbe\x01\x00\x00\x00\xba\x07\x00\x00\x00\xe8\x7e\xf0\xff\xff\x41\xbe\x02\x00\x00\x00", "xxxxxxxxxxxxxxxxxxxxx????xxxxxx", 31, 1 };
        // 55 48 89 e5 53 50 48 89 fb be 01 00 00 00 e8 c9? ed? ff? ff? 48 89 df e8 e9? 9d? ff? ff?
        inline constexpr Sig luaB_pcall = { "\x55\x48\x89\xe5\x53\x50\x48\x89\xfb\xbe\x01\x00\x00\x00\xe8\xc9\xed\xff\xff\x48\x89\xdf\xe8\xe9\x9d\xff\xff", "xxxxxxxxxxxxxxx????xxxx????", 27, 1 };
        // 55 48 89 e5 41 56 53 41 89 f6 48 89 fb 80 3d 86 1c? be? 04? 01?
        inline constexpr Sig luaB_pcallrun = { "\x55\x48\x89\xe5\x41\x56\x53\x41\x89\xf6\x48\x89\xfb\x80\x3d\x86\x1c\xbe\x04\x01", "xxxxxxxxxxxxxxxx????", 20, 1 };
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 50 48 89 fb e8 3b? 99? ff? ff? 85 c0 7e 78
        inline constexpr Sig luaB_print = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x50\x48\x89\xfb\xe8\x3b\x99\xff\xff\x85\xc0\x7e\x78", "xxxxxxxxxxxxxxxxxx????xxxx", 26, 1 };
        // 55 48 89 e5 53 50 48 89 fb be 01 00 00 00 e8 53? e8? ff? ff? 48 89 df be 02 00 00 00 e8 46? e8? ff? ff? 48 89 df be 01 00 00 00
        inline constexpr Sig luaB_rawequal = { "\x55\x48\x89\xe5\x53\x50\x48\x89\xfb\xbe\x01\x00\x00\x00\xe8\x53\xe8\xff\xff\x48\x89\xdf\xbe\x02\x00\x00\x00\xe8\x46\xe8\xff\xff\x48\x89\xdf\xbe\x01\x00\x00\x00", "xxxxxxxxxxxxxxx????xxxxxxxxx????xxxxxxxx", 40, 1 };
        // 55 48 89 e5 53 50 48 89 fb be 01 00 00 00 ba 07 00 00 00 e8 d3? e7? ff? ff? 48 89 df be 02 00 00 00 e8 f9? e7? ff? ff? 48 89 df be 02 00 00 00
        inline constexpr Sig luaB_rawget = { "\x55\x48\x89\xe5\x53\x50\x48\x89\xfb\xbe\x01\x00\x00\x00\xba\x07\x00\x00\x00\xe8\xd3\xe7\xff\xff\x48\x89\xdf\xbe\x02\x00\x00\x00\xe8\xf9\xe7\xff\xff\x48\x89\xdf\xbe\x02\x00\x00\x00", "xxxxxxxxxxxxxxxxxxxx????xxxxxxxxx????xxxxxxxx", 45, 1 };
        // 55 48 89 e5 53 50 48 89 fb be 01 00 00 00 e8 35? 9c? ff? ff? 83 e0 fe
        inline constexpr Sig luaB_rawlen = { "\x55\x48\x89\xe5\x53\x50\x48\x89\xfb\xbe\x01\x00\x00\x00\xe8\x35\x9c\xff\xff\x83\xe0\xfe", "xxxxxxxxxxxxxxx????xxx", 22, 1 };
        // 55 48 89 e5 53 50 48 89 fb be 01 00 00 00 ba 07 00 00 00 e8 88? e7? ff? ff? 48 89 df be 02 00 00 00 e8 ae? e7? ff? ff? 48 89 df be 03 00 00 00
        inline constexpr Sig luaB_rawset = { "\x55\x48\x89\xe5\x53\x50\x48\x89\xfb\xbe\x01\x00\x00\x00\xba\x07\x00\x00\x00\xe8\x88\xe7\xff\xff\x48\x89\xdf\xbe\x02\x00\x00\x00\xe8\xae\xe7\xff\xff\x48\x89\xdf\xbe\x03\x00\x00\x00", "xxxxxxxxxxxxxxxxxxxx????xxxxxxxxx????xxxxxxxx", 45, 1 };
        // 55 48 89 e5 41 57 41 56 53 50 48 89 fb e8 30? 97? ff? ff? 41 89 c6 48 89 df be 01 00 00 00 e8 c5? 9b? ff? ff? 83 f8 06
        inline constexpr Sig luaB_select = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x53\x50\x48\x89\xfb\xe8\x30\x97\xff\xff\x41\x89\xc6\x48\x89\xdf\xbe\x01\x00\x00\x00\xe8\xc5\x9b\xff\xff\x83\xf8\x06", "xxxxxxxxxxxxxx????xxxxxxxxxxxx????xxx", 37, 1 };
        // 55 48 89 e5 41 56 53 48 83 ec 10 48 89 fb be 02 00 00 00 ba 07 00 00 00
        inline constexpr Sig luaB_setfenv = { "\x55\x48\x89\xe5\x41\x56\x53\x48\x83\xec\x10\x48\x89\xfb\xbe\x02\x00\x00\x00\xba\x07\x00\x00\x00", "xxxxxxxxxxxxxxxxxxxxxxxx", 24, 1 };
        // 55 48 89 e5 41 56 53 48 83 ec 10 48 89 fb be 02 00 00 00 e8 3a? 9a? ff? ff? 41 89 c6
        inline constexpr Sig luaB_setmetatable = { "\x55\x48\x89\xe5\x41\x56\x53\x48\x83\xec\x10\x48\x89\xfb\xbe\x02\x00\x00\x00\xe8\x3a\x9a\xff\xff\x41\x89\xc6", "xxxxxxxxxxxxxxxxxxxx????xxx", 27, 1 };
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 50 48 89 fb be 02 00 00 00
        inline constexpr Sig luaB_tonumber = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x50\x48\x89\xfb\xbe\x02\x00\x00\x00", "xxxxxxxxxxxxxxxxxxxxxx", 22, 1 };
        // 55 48 89 e5 53 50 48 89 fb be 01 00 00 00 e8 7f? e3? ff? ff? 48 89 df be 01 00 00 00 31 d2
        inline constexpr Sig luaB_tostring = { "\x55\x48\x89\xe5\x53\x50\x48\x89\xfb\xbe\x01\x00\x00\x00\xe8\x7f\xe3\xff\xff\x48\x89\xdf\xbe\x01\x00\x00\x00\x31\xd2", "xxxxxxxxxxxxxxx????xxxxxxxxxx", 29, 1 };
        // 55 48 89 e5 53 50 48 89 fb be 01 00 00 00 e8 51? e3? ff? ff? 48 89 df be 01 00 00 00 e8 11? 98? ff? ff? 48 89 df 89 c6
        inline constexpr Sig luaB_type = { "\x55\x48\x89\xe5\x53\x50\x48\x89\xfb\xbe\x01\x00\x00\x00\xe8\x51\xe3\xff\xff\x48\x89\xdf\xbe\x01\x00\x00\x00\xe8\x11\x98\xff\xff\x48\x89\xdf\x89\xc6", "xxxxxxxxxxxxxxx????xxxxxxxxx????xxxxx", 37, 1 };
        // 55 48 89 e5 53 50 48 89 fb be 01 00 00 00 e8 10? e3? ff? ff? 48 89 df be 01 00 00 00 e8 17? e9? ff? ff? 48 89 df 48 89 c6
        inline constexpr Sig luaB_typeof = { "\x55\x48\x89\xe5\x53\x50\x48\x89\xfb\xbe\x01\x00\x00\x00\xe8\x10\xe3\xff\xff\x48\x89\xdf\xbe\x01\x00\x00\x00\xe8\x17\xe9\xff\xff\x48\x89\xdf\x48\x89\xc6", "xxxxxxxxxxxxxxx????xxxxxxxxx????xxxxxx", 38, 1 };
    }

    namespace Misc {
        // 55 48 89 e5 53 48 81 ec 58 01 00 00 89 fb
        inline constexpr Sig Print = { "\x55\x48\x89\xe5\x53\x48\x81\xec\x58\x01\x00\x00\x89\xfb", "xxxxxxxxxxxxxx", 14, 1 };
        // 55 48 89 e5 41 57 41 56 53 50 48 89 d3 49 89 f6 49 89 ff 48 8b 76 28 49 63 96 94 00 00 00
        inline constexpr Sig luaF_freeproto = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x53\x50\x48\x89\xd3\x49\x89\xf6\x49\x89\xff\x48\x8b\x76\x28\x49\x63\x96\x94\x00\x00\x00", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", 30, 1 };
        // 55 48 89 e5 41 57 41 56 53 50 48 89 d3 49 89 fe 4c 63 fe 4c 89 fe
        inline constexpr Sig luaF_newCclosure = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x53\x50\x48\x89\xd3\x49\x89\xfe\x4c\x63\xfe\x4c\x89\xfe", "xxxxxxxxxxxxxxxxxxxxxx", 22, 1 };
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 48 81 ec 98 00 00 00 49 89 d6 41 89 f7 48 89 fb 48 8b 05 30? 42? 4d? 04?
        inline constexpr Sig luaL_tostring = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x48\x81\xec\x98\x00\x00\x00\x49\x89\xd6\x41\x89\xf7\x48\x89\xfb\x48\x8b\x05\x30\x42\x4d\x04", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx????", 36, 1 };
        // 55 48 89 e5 49 89 d0 48 8b 47 50
        inline constexpr Sig luaS_free = { "\x55\x48\x89\xe5\x49\x89\xd0\x48\x8b\x47\x50", "xxxxxxxxxxx", 11, 1 };
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 50 49 89 d7 49 89 f5 48 89 fb 48 89 f7
        inline constexpr Sig luaS_newlstr = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x50\x49\x89\xd7\x49\x89\xf5\x48\x89\xfb\x48\x89\xf7", "xxxxxxxxxxxxxxxxxxxxxxxxxx", 26, 1 };
        // 55 48 89 e5 53 50 48 89 fb e8 9b? 06? 00? 00? 48 89 df e8 ff? 7a? fe? ff? b8 01 00 00 00 48 83 c4 08 5b 5d c3
        inline constexpr Sig lua_clock = { "\x55\x48\x89\xe5\x53\x50\x48\x89\xfb\xe8\x9b\x06\x00\x00\x48\x89\xdf\xe8\xff\x7a\xfe\xff\xb8\x01\x00\x00\x00\x48\x83\xc4\x08\x5b\x5d\xc3", "xxxxxxxxxx????xxxx????xxxxxxxxxxxx", 34, 4 };
        // 55 48 89 e5 41 56 53 49 89 fe 48 85 f6 74 1d
        inline constexpr Sig lua_pushstring = { "\x55\x48\x89\xe5\x41\x56\x53\x49\x89\xfe\x48\x85\xf6\x74\x1d", "xxxxxxxxxxxxxxx", 15, 1 };
        // 55 48 89 e5 41 57 41 56 53 48 83 ec 18 49 89 d6 48 89 fb 85 f6 7e 22
        inline constexpr Sig lua_setfield = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x53\x48\x83\xec\x18\x49\x89\xd6\x48\x89\xfb\x85\xf6\x7e\x22", "xxxxxxxxxxxxxxxxxxxxxxx", 23, 1 };
    }

    namespace Roblox {
        // 55 48 89 e5 53 50 48 89 fb e8 09? 12? 5d? 01? 48 8b 40 18 48 8b 40 30 48 8b 80 00 01 00 00 48 85 c0 74 09
        inline constexpr Sig ConnectionDisconnect = { "\x55\x48\x89\xe5\x53\x50\x48\x89\xfb\xe8\x09\x12\x5d\x01\x48\x8b\x40\x18\x48\x8b\x40\x30\x48\x8b\x80\x00\x01\x00\x00\x48\x85\xc0\x74\x09", "xxxxxxxxxx????xxxxxxxxxxxxxxxxxxxx", 34, 1 };
        // 55 48 89 e5 48 83 ec 10 8b 87 b8 13 00 00 83 f8 03 7d 10 48 81 c7 d8 0e 00 00
        inline constexpr Sig GetGlobalState = { "\x55\x48\x89\xe5\x48\x83\xec\x10\x8b\x87\xb8\x13\x00\x00\x83\xf8\x03\x7d\x10\x48\x81\xc7\xd8\x0e\x00\x00", "xxxxxxxxxxxxxxxxxxxxxxxxxx", 26, 1 };
        // 55 48 89 e5 41 57 41 56 41 54 53 48 83 ec 10 49 89 d4 48 89 f3 49 89 fe 48 8d 55 dc
        inline constexpr Sig PushInstance = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x54\x53\x48\x83\xec\x10\x49\x89\xd4\x48\x89\xf3\x49\x89\xfe\x48\x8d\x55\xdc", "xxxxxxxxxxxxxxxxxxxxxxxxxxxx", 28, 1 };
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 48 81 ec 88 00 00 00 48 89 fb 48 8b 05 84? a5? 9f? 05? 48 8b 00 48 89 45 d0 48 8b 07 4c 8b 77 08
        inline constexpr Sig ScriptContextResume = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x48\x81\xec\x88\x00\x00\x00\x48\x89\xfb\x48\x8b\x05\x84\xa5\x9f\x05\x48\x8b\x00\x48\x89\x45\xd0\x48\x8b\x07\x4c\x8b\x77\x08", "xxxxxxxxxxxxxxxxxxxxxxxxxx????xxxxxxxxxxxxxx", 44, 1 };
    }

    namespace Input {
        // 55 48 89 e5 41 57 41 56 41 54 53 48 83 ec 20 f3 0f 10 8f d0 00 00 00 0f 2e c8 0f 86 b0 00 00 00
        inline constexpr Sig FireLeftMouseClick = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x54\x53\x48\x83\xec\x20\xf3\x0f\x10\x8f\xd0\x00\x00\x00\x0f\x2e\xc8\x0f\x86\xb0\x00\x00\x00", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", 32, 1 };
        // 55 48 89 e5 41 57 41 56 41 54 53 48 83 ec 20 49 89 f6 48 89 fb 48 8d 05 c0? 51? 41? 02? 4c 8b 20
        inline constexpr Sig FireMouseHoverEnter = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x54\x53\x48\x83\xec\x20\x49\x89\xf6\x48\x89\xfb\x48\x8d\x05\xc0\x51\x41\x02\x4c\x8b\x20", "xxxxxxxxxxxxxxxxxxxxxxxx????xxx", 31, 1 };
        // 55 48 89 e5 41 57 41 56 41 54 53 48 83 ec 30 49 89 f6 48 89 fb 48 8b 07 ff 90 d8 02 00 00
        inline constexpr Sig FireMouseHoverLeave = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x54\x53\x48\x83\xec\x30\x49\x89\xf6\x48\x89\xfb\x48\x8b\x07\xff\x90\xd8\x02\x00\x00", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", 30, 1 };
        // 55 48 89 e5 41 56 53 48 83 ec 70 48 89 fb e8 23? 1d? b6? 00? 48 85 c0
        inline constexpr Sig FireProximityPrompt = { "\x55\x48\x89\xe5\x41\x56\x53\x48\x83\xec\x70\x48\x89\xfb\xe8\x23\x1d\xb6\x00\x48\x85\xc0", "xxxxxxxxxxxxxxx????xxx", 22, 1 };
        // 55 48 89 e5 41 57 41 56 41 54 53 48 83 ec 20 f3 0f 10 8f d0 00 00 00 0f 2e c8 0f 86 b3 00 00 00
        inline constexpr Sig FireRightMouseClick = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x54\x53\x48\x83\xec\x20\xf3\x0f\x10\x8f\xd0\x00\x00\x00\x0f\x2e\xc8\x0f\x86\xb3\x00\x00\x00", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", 32, 1 };
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 48 83 ec 58 41 89 cc 41 89 d7 48 89 f3 49 89 fe e8 88? 77? be? 03?
        inline constexpr Sig FireTouchInterest = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x48\x83\xec\x58\x41\x89\xcc\x41\x89\xd7\x48\x89\xf3\x49\x89\xfe\xe8\x88\x77\xbe\x03", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx????", 34, 1 };
    }

    namespace Raknet {
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 48 81 ec 28 04 00 00 48 89 8d b0 fb ff ff
        inline constexpr Sig HandleConnectionState = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x48\x81\xec\x28\x04\x00\x00\x48\x89\x8d\xb0\xfb\xff\xff", "xxxxxxxxxxxxxxxxxxxxxxxxxxx", 27, 1 };
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 48 81 ec d8 00 00 00 4c 89 4d d0 4d 89 c4
        inline constexpr Sig ProcessNetworkPacket = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x48\x81\xec\xd8\x00\x00\x00\x4c\x89\x4d\xd0\x4d\x89\xc4", "xxxxxxxxxxxxxxxxxxxxxxxxxxx", 27, 1 };
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 48 81 ec 78 02 00 00 45 89 ce 41 89 d5
        inline constexpr Sig ReportNetworkError = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x48\x81\xec\x78\x02\x00\x00\x45\x89\xce\x41\x89\xd5", "xxxxxxxxxxxxxxxxxxxxxxxxxx", 26, 1 };
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 48 81 ec a8 00 00 00 49 89 ce 49 89 f7 48 89 fb
        inline constexpr Sig Send = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x48\x81\xec\xa8\x00\x00\x00\x49\x89\xce\x49\x89\xf7\x48\x89\xfb", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx", 29, 1 };
    }

    namespace Task {
        // 55 48 89 e5 41 56 53 48 83 ec 10 48 89 fb be 01 00 00 00 e8 04? 8b? 5a? 01? 48 85 c0 0f 84 b2 00 00 00
        inline constexpr Sig cancel = { "\x55\x48\x89\xe5\x41\x56\x53\x48\x83\xec\x10\x48\x89\xfb\xbe\x01\x00\x00\x00\xe8\x04\x8b\x5a\x01\x48\x85\xc0\x0f\x84\xb2\x00\x00\x00", "xxxxxxxxxxxxxxxxxxxx????xxxxxxxxx", 33, 1 };
        // 55 48 89 e5 41 57 41 56 41 55 41 54 53 48 81 ec d8 00 00 00 48 89 fb 80 3d 3c 9c? 15? 06? 00?
        inline constexpr Sig defer = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x55\x41\x54\x53\x48\x81\xec\xd8\x00\x00\x00\x48\x89\xfb\x80\x3d\x3c\x9c\x15\x06\x00", "xxxxxxxxxxxxxxxxxxxxxxxxxx????", 30, 1 };
        // 55 48 89 e5 41 56 53 48 83 ec 10 48 89 fb be 01 00 00 00 e8 04? 8b? 5a? 01? 48 85 c0 0f 84 b2 00 00 00
        inline constexpr Sig delay = { "\x55\x48\x89\xe5\x41\x56\x53\x48\x83\xec\x10\x48\x89\xfb\xbe\x01\x00\x00\x00\xe8\x04\x8b\x5a\x01\x48\x85\xc0\x0f\x84\xb2\x00\x00\x00", "xxxxxxxxxxxxxxxxxxxx????xxxxxxxxx", 33, 1 };
        // 55 48 89 e5 41 57 41 56 53 48 83 ec 28 48 89 fb e8 fe? 6c? 0f? 00? 80 b8 58 02 00 00 00 74 68
        inline constexpr Sig desynchronize = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x53\x48\x83\xec\x28\x48\x89\xfb\xe8\xfe\x6c\x0f\x00\x80\xb8\x58\x02\x00\x00\x00\x74\x68", "xxxxxxxxxxxxxxxxx????xxxxxxxxx", 30, 1 };
        // 55 48 89 e5 41 56 53 48 81 ec 60 01 00 00 48 8b 05 18? 11? a8? 05? 48 8b 00 48 89 45 e8 48 8d 9d 98 fe ff ff 48 89 3b e8 f2? fe? d5? 01?
        inline constexpr Sig spawn = { "\x55\x48\x89\xe5\x41\x56\x53\x48\x81\xec\x60\x01\x00\x00\x48\x8b\x05\x18\x11\xa8\x05\x48\x8b\x00\x48\x89\x45\xe8\x48\x8d\x9d\x98\xfe\xff\xff\x48\x89\x3b\xe8\xf2\xfe\xd5\x01", "xxxxxxxxxxxxxxxxx????xxxxxxxxxxxxxxxxxx????", 43, 10 };
        // 55 48 89 e5 41 57 41 56 53 48 83 ec 28 48 89 fb e8 c6? 6d? 0f? 00? 80 b8 58 02 00 00 00 74 64
        inline constexpr Sig synchronize = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x53\x48\x83\xec\x28\x48\x89\xfb\xe8\xc6\x6d\x0f\x00\x80\xb8\x58\x02\x00\x00\x00\x74\x64", "xxxxxxxxxxxxxxxxx????xxxxxxxxx", 30, 1 };
        // 55 48 89 e5 53 50 48 89 fb 8a 05 cd? 40? 6a? 06? 84 c0 74 49
        inline constexpr Sig task_lib_init = { "\x55\x48\x89\xe5\x53\x50\x48\x89\xfb\x8a\x05\xcd\x40\x6a\x06\x84\xc0\x74\x49", "xxxxxxxxxxx????xxxx", 19, 1 };
        // 55 48 89 e5 41 57 41 56 41 54 53 48 83 ec 30 48 89 fb 80 3d 89 94? 15? 06? 00?
        inline constexpr Sig wait = { "\x55\x48\x89\xe5\x41\x57\x41\x56\x41\x54\x53\x48\x83\xec\x30\x48\x89\xfb\x80\x3d\x89\x94\x15\x06\x00", "xxxxxxxxxxxxxxxxxxxxx????", 25, 1 };
    }

}
