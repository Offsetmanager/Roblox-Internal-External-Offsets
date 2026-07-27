#include <cstdint>
//dumped by phantomteam, 124 offsets
namespace Offsets
{
    const uintptr_t AttachRobloxExtraSpace = REBASE(0x1DBEEE0);
    const uintptr_t FireTouchInterest = REBASE(0x4B5E9A0);
    const uintptr_t GetCapabilities = REBASE(0x2166410);
    const uintptr_t GetContextObject = REBASE(0x1D6F9B0);
    const uintptr_t GetCurrentThreadId = REBASE(0x50D4080);
    const uintptr_t GetCurrentThreadIdentity = REBASE(0xA31140);
    const uintptr_t GetFFlag = REBASE(0x5122240);
    const uintptr_t GetIdentityStruct = REBASE(0x1D595A0);
    const uintptr_t GetLuaState = REBASE(0x1D5F220);
    const uintptr_t GetModuleFromVMStateMap = REBASE(0x1DF7810);
    const uintptr_t GetProperty = REBASE(0xA1DF44D);
    const uintptr_t GetValues = REBASE(0x1D59480);
    const uintptr_t IdentityPtr = REBASE(0x7A0EFD8);
    const uintptr_t IentityToCaps = REBASE(0x4BE5D40);
    const uintptr_t Impersonator = REBASE(0x4AD56467);
    const uintptr_t NewInstance = REBASE(0xADC6B0);
    const uintptr_t OpCodeLookupTable = REBASE(0x6671C60);
    const uintptr_t ProcessNetworkPacket = REBASE(0x665E50);
    const uintptr_t PushInstance = REBASE(0x1D51980);
    const uintptr_t ScriptContextResume = REBASE(0x4CCA290);
    const uintptr_t cocreate = REBASE(0x4B37500);
    const uintptr_t coroutine_resume = REBASE(0x1D77600);
    const uintptr_t f_luaopen = REBASE(0x71AFA0);
    const uintptr_t getglobalstate = REBASE(0x1D5EE50);
    const uintptr_t loadsafe = REBASE(0x68C900);
    const uintptr_t luavm__load = REBASE(0xBCCEB0);
    const uintptr_t print = REBASE(0x4BE0790);

    namespace Luau
    {
        const uintptr_t atomic = REBASE(0x6753B0);
        const uintptr_t callerrfunc = REBASE(0x4B200E0);
        const uintptr_t close_state = REBASE(0x4B1E860);
        const uintptr_t currentline = REBASE(0x1F01A8B);
        const uintptr_t currfuncname = REBASE(0x4B21BF0);
        const uintptr_t luaA_toobject = REBASE(0x4B1A5D0);
        const uintptr_t luaB_assert = REBASE(0x650B90);
        const uintptr_t luaB_error = REBASE(0x4B365E0);
        const uintptr_t luaB_gcinfo = REBASE(0x4B36A10);
        const uintptr_t luaB_getfenv = REBASE(0x4B36770);
        const uintptr_t luaB_getmetatable = REBASE(0x4B36650);
        const uintptr_t luaB_net = REBASE(0x4B36AC0);
        const uintptr_t luaB_newproy = REBASE(0x4B36C70);
        const uintptr_t luaB_pcallrun = REBASE(0x4B370C0);
        const uintptr_t luaB_pcally = REBASE(0x4B364A0);
        const uintptr_t luaB_pcally_alt = REBASE(0x4B365E0);
        const uintptr_t luaB_print = REBASE(0x4B363C0);
        const uintptr_t luaB_rawequal = REBASE(0x26C3C80);
        const uintptr_t luaB_rawget = REBASE(0x4B36900);
        const uintptr_t luaB_rawlen = REBASE(0x4B369B0);
        const uintptr_t luaB_rawset = REBASE(0x4B36950);
        const uintptr_t luaB_select = REBASE(0x4B36B90);
        const uintptr_t luaB_setfenv = REBASE(0x4B367D0);
        const uintptr_t luaB_setmetatable = REBASE(0x4B366B0);
        const uintptr_t luaB_tonumber = REBASE(0x4B364A0);
        const uintptr_t luaB_tostring = REBASE(0x4B36C40);
        const uintptr_t luaB_type = REBASE(0x4B36A40);
        const uintptr_t luaB_typeof = REBASE(0x4B36A80);
        const uintptr_t luaC_step = REBASE(0x4B255B0);
        const uintptr_t luaD_rawrunprotected = REBASE(0x4B20D80);
        const uintptr_t luaD_throw = REBASE(0x4B210C0);
        const uintptr_t luaF_freeproto = REBASE(0x4B4C660);
        const uintptr_t luaF_newLclosure = REBASE(0x4B4C930);
        const uintptr_t luaF_newproto = REBASE(0x4B4C9E0);
        const uintptr_t luaG_runerrorL = REBASE(0x4AD1390);
        const uintptr_t luaH_clone = REBASE(0x4B44B10);
        const uintptr_t luaH_dummynode = REBASE(0x5FEEA88);
        const uintptr_t luaH_new = REBASE(0x4B45410);
        const uintptr_t luaL_argerrorL = REBASE(0x4B22100);
        const uintptr_t luaL_callmeta = REBASE(0x4B22650);
        const uintptr_t luaL_checklstring = REBASE(0x4B22880);
        const uintptr_t luaL_errorL = REBASE(0x4B224D0);
        const uintptr_t luaL_findtable = REBASE(0x4B22520);
        const uintptr_t luaL_getmetafield = REBASE(0x4B1AEC0);
        const uintptr_t luaL_register = REBASE(0x4B22BA0);
        const uintptr_t luaL_tolstring = REBASE(0x657580);
        const uintptr_t luaL_typerrorL = REBASE(0x4B23400);
        const uintptr_t luaL_where = REBASE(0x164350);
        const uintptr_t luaM_free_ = REBASE(0x4B42F90);
        const uintptr_t luaM_freegco_ = REBASE(0x4B42E40);
        const uintptr_t luaM_visitgco = REBASE(0x4B434E0);
        const uintptr_t luaO_chunkid = REBASE(0x4B52960);
        const uintptr_t luaO_nilobject = REBASE(0x5FEEAE0);
        const uintptr_t luaO_pushfstring = REBASE(0x349B400);
        const uintptr_t luaO_pushvfstring = REBASE(0x689AE0);
        const uintptr_t luaT_init = REBASE(0x4B438B0);
        const uintptr_t luaT_objtypename = REBASE(0x4B43990);
        const uintptr_t luaV_gettable = REBASE(0x4B4E5A0);
        const uintptr_t lua_eception = REBASE(0x4B200C0);
        const uintptr_t lua_newstate = REBASE(0x4B1EF40);
        const uintptr_t lua_pushfstringL = REBASE(0x4B1BE70);
        const uintptr_t lua_pushstring = REBASE(0x4B1C1D0);
        const uintptr_t lua_pushvfstring = REBASE(0x4B1C570);
        const uintptr_t lua_reallocstack = REBASE(0x4B20970);
        const uintptr_t lua_resetthread = REBASE(0x4B1FF90);
        const uintptr_t lua_setfield = REBASE(0x4B1D530);
        const uintptr_t lua_typename = REBASE(0x54C6040);
        const uintptr_t lua_yield = REBASE(0x4B375A0);
        const uintptr_t luaopen_base = REBASE(0x4B37310);
        const uintptr_t luaopen_math = REBASE(0x4B406D0);
        const uintptr_t luau_execute = REBASE(0x4B34050);
        const uintptr_t newblock = REBASE(0x4B435B0);
        const uintptr_t newclasspage = REBASE(0x4B43640);
        const uintptr_t newgcoblock = REBASE(0x4B43250);
        const uintptr_t newpage = REBASE(0x4B43740);
        const uintptr_t pseudoaddr = REBASE(0x4B1E6A0);
        const uintptr_t pusherror = REBASE(0x4B21040);
        const uintptr_t tag_error = REBASE(0x4B235F0);
        const uintptr_t traversetable = REBASE(0x644535);
    }

    namespace TaskScheduler
    {
        const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x5EA5140);
        const uintptr_t RawScheduler = REBASE(0x5FA8E00);
        const uintptr_t TaskDesynchronize = REBASE(0x1EA30A0);
        const uintptr_t TaskSchedulerTargetFps = REBASE(0x6BEC998);
        const uintptr_t TaskSynchronize = REBASE(0x1EA3AC0);
        const uintptr_t task_cancel = REBASE(0x1EA2750);
        const uintptr_t task_defer = REBASE(0x20E440);
        const uintptr_t task_delay = REBASE(0x6AEA09);
        const uintptr_t task_wait = REBASE(0x497B990);
    }

    namespace GarbageCollector
    {
        const uintptr_t L_global = 0x60;
        const uintptr_t L_singlestep = 0x5;
        const uintptr_t g_freepages = 0x98;
        const uintptr_t g_gcstate = 0x59;
        const uintptr_t g_gcstepmul = 0x49;
        const uintptr_t g_gcstepsize = 0x4D;
        const uintptr_t g_gray = 0x20;
        const uintptr_t g_grayagain = 0x18;
        const uintptr_t g_weak = 0x10;
    }
}
