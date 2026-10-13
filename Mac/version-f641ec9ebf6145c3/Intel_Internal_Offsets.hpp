#pragma once
#include <cstdint>

#define REBASE(x) (x)

namespace Offsets
{
    inline constexpr const char* luau = "0.743.0.7431129";

    namespace Memory {
        inline const uintptr_t luaM_freearray = REBASE(0x2AD3390);
        inline const uintptr_t luaM_freegco = REBASE(0x2AD348A);
        inline const uintptr_t luaM_newgco = REBASE(0x2AD2EAA);
        inline const uintptr_t luaM_toobig = REBASE(0x2AD2BD6);
        inline const uintptr_t luaM_visitgco = REBASE(0x2AD3C7A);
        inline const uintptr_t newblock = REBASE(0x2AD2BFB);
        inline const uintptr_t newclasspage = REBASE(0x2AD3CB9);
        inline const uintptr_t newgcoblock = REBASE(0x2AD2F16);
        inline const uintptr_t newpage = REBASE(0x2AD2FF4);
    }

    namespace Luau {
        inline const uintptr_t LuaVMLoad = REBASE(0x2AE006E);
        inline const uintptr_t OpcodeLookupTable = REBASE(0x64DE990);
        inline const uintptr_t loadsafe = REBASE(0x2AE018C);
        inline const uintptr_t luaA_toobject = REBASE(0x2ABF95F);
        inline const uintptr_t luaC_step = REBASE(0x2ACC49A);
        inline const uintptr_t luaD_rawrunprotected = REBASE(0x2ACA8F0);
        inline const uintptr_t luaD_throw = REBASE(0x2ACA991);
        inline const uintptr_t luaF_newLclosure = REBASE(0x2ACBE34);
        inline const uintptr_t luaF_newUpval = REBASE(0x2ACC031);
        inline const uintptr_t luaF_newproto = REBASE(0x2ACBD5D);
        inline const uintptr_t luaG_runerror = REBASE(0x2AC9940);
        inline const uintptr_t luaH_clone = REBASE(0x2ADC467);
        inline const uintptr_t luaH_dummynode = REBASE(0x64DE950);
        inline const uintptr_t luaH_new = REBASE(0x2ADA945);
        inline const uintptr_t luaL_argerrorL = REBASE(0x2ABFA9C);
        inline const uintptr_t luaL_checklstring = REBASE(0x2ABFEC7);
        inline const uintptr_t luaL_errorL = REBASE(0x2ABFB69);
        inline const uintptr_t luaL_findtable = REBASE(0x2AC05E3);
        inline const uintptr_t luaL_register = REBASE(0x2AC04AF);
        inline const uintptr_t luaL_typerrorL = REBASE(0x2ABFC1E);
        inline const uintptr_t luaO_chunkid = REBASE(0x2AD4897);
        inline const uintptr_t luaO_nilobject = REBASE(0x64DE7F0);
        inline const uintptr_t luaO_str2d = REBASE(0x2AD45A8);
        inline const uintptr_t luaT_init = REBASE(0x2ADEAB4);
        inline const uintptr_t luaT_objtypename = REBASE(0x2ADECE3);
        inline const uintptr_t luaV_equal = REBASE(0x2AD445C);
        inline const uintptr_t luaV_gettable = REBASE(0x2AE1FAA);
        inline const uintptr_t luaV_lessthan = REBASE(0x2AE2978);
        inline const uintptr_t luaV_settable = REBASE(0x2AE249A);
        inline const uintptr_t lua_eception = REBASE(0x2ACA9CE);
        inline const uintptr_t lua_encodepointer = REBASE(0x2ABEE27);
        inline const uintptr_t lua_namecallatom = REBASE(0x2ABBF5F);
        inline const uintptr_t lua_newstate = REBASE(0x2AD55DD);
        inline const uintptr_t lua_pushfstringL = REBASE(0x2ABC820);
        inline const uintptr_t lua_pushvfstring = REBASE(0x2ABC7C5);
        inline const uintptr_t lua_rawcheckstack = REBASE(0x2ACB3F6);
        inline const uintptr_t lua_resetthread = REBASE(0x2AD53F3);
        inline const uintptr_t lua_yield = REBASE(0x2AC8293);
        inline const uintptr_t luaopen_base = REBASE(0x2AC10CC);
        inline const uintptr_t luaopen_math = REBASE(0x2AD19EF);
        inline const uintptr_t luaopen_os = REBASE(0x2AD4983);
        inline const uintptr_t luau_execute = REBASE(0x2AE4102);
    }

    namespace LuaLib {
        inline const uintptr_t luaB_assert = REBASE(0x2AC156E);
        inline const uintptr_t luaB_error = REBASE(0x2AC15E3);
        inline const uintptr_t luaB_gcinfo = REBASE(0x2AC1658);
        inline const uintptr_t luaB_getfenv = REBASE(0x2AC1683);
        inline const uintptr_t luaB_getmetatable = REBASE(0x2AC16DB);
        inline const uintptr_t luaB_newproxy = REBASE(0x2AC1729);
        inline const uintptr_t luaB_next = REBASE(0x2AC1015);
        inline const uintptr_t luaB_pcall = REBASE(0x2AC1303);
        inline const uintptr_t luaB_pcallrun = REBASE(0x2AC1336);
        inline const uintptr_t luaB_print = REBASE(0x2AC17B6);
        inline const uintptr_t luaB_rawequal = REBASE(0x2AC1879);
        inline const uintptr_t luaB_rawget = REBASE(0x2AC18C1);
        inline const uintptr_t luaB_rawlen = REBASE(0x2AC1964);
        inline const uintptr_t luaB_rawset = REBASE(0x2AC190C);
        inline const uintptr_t luaB_select = REBASE(0x2AC19C5);
        inline const uintptr_t luaB_setfenv = REBASE(0x2AC1A70);
        inline const uintptr_t luaB_setmetatable = REBASE(0x2AC1B5A);
        inline const uintptr_t luaB_tonumber = REBASE(0x2AC1C15);
        inline const uintptr_t luaB_tostring = REBASE(0x2AC1D4D);
        inline const uintptr_t luaB_type = REBASE(0x2AC1D7B);
        inline const uintptr_t luaB_typeof = REBASE(0x2AC1DBC);
    }

    namespace Misc {
        inline const uintptr_t Print = REBASE(0x2D40481);
        inline const uintptr_t luaF_freeproto = REBASE(0x2ACC199);
        inline const uintptr_t luaF_newCclosure = REBASE(0x2ACBFB9);
        inline const uintptr_t luaL_tostring = REBASE(0x2AC0DD4);
        inline const uintptr_t luaS_free = REBASE(0x2AD60C9);
        inline const uintptr_t luaS_newlstr = REBASE(0x2AD5F73);
        inline const uintptr_t lua_clock = REBASE(0x2AD49A1);
        inline const uintptr_t lua_pushstring = REBASE(0x2ABC78D);
        inline const uintptr_t lua_setfield = REBASE(0x2ABD4E6);
    }

    namespace Roblox {
        inline const uintptr_t ConnectionDisconnect = REBASE(0x14ECF68);
        inline const uintptr_t GetGlobalState = REBASE(0x569ED98);
        inline const uintptr_t PushInstance = REBASE(0x14CAEE9);
        inline const uintptr_t ScriptContextResume = REBASE(0x159AA86);
    }

    namespace Input {
        inline const uintptr_t FireLeftMouseClick = REBASE(0x4D196E4);
        inline const uintptr_t FireMouseHoverEnter = REBASE(0x4D1A48C);
        inline const uintptr_t FireMouseHoverLeave = REBASE(0x4D1A572);
        inline const uintptr_t FireProximityPrompt = REBASE(0x4382918);
        inline const uintptr_t FireRightMouseClick = REBASE(0x4D19846);
        inline const uintptr_t FireTouchInterest = REBASE(0x11057D4);
    }

    namespace Raknet {
        inline const uintptr_t HandleConnectionState = REBASE(0x557362E);
        inline const uintptr_t ProcessNetworkPacket = REBASE(0x2DC86B4);
        inline const uintptr_t ReportNetworkError = REBASE(0x55731E2);
        inline const uintptr_t Send = REBASE(0x2DCF6C8);
    }

    namespace Task {
        inline const uintptr_t cancel = REBASE(0x1513814);
        inline const uintptr_t defer = REBASE(0x1512F26);
        inline const uintptr_t delay = REBASE(0x1513814);
        inline const uintptr_t desynchronize = REBASE(0x1512E5A);
        inline const uintptr_t spawn = REBASE(0x1513EFB);
        inline const uintptr_t synchronize = REBASE(0x1512D92);
        inline const uintptr_t task_lib_init = REBASE(0x1512B74);
        inline const uintptr_t wait = REBASE(0x15136DE);
    }

}
