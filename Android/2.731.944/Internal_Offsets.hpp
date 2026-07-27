namespace addresses
{
    const uintptr_t Print = 0x5501278;
    const uintptr_t ScriptStart = 0x3A13C38;
    const uintptr_t PushInstance = 0x5B0DF54;
    const uintptr_t ScriptContextResume = 0x222EFAC;
    const uintptr_t GetLuaStateForInstance = 0x222B91C;

    const uintptr_t RobloxSpawn = 0x2235D18;
    const uintptr_t OnGameLeave = 0x273A1A0;
    const uintptr_t OnGameLoaded = 0x2282620;

    const uintptr_t GetCapabilities = 0x222C604;
    const uintptr_t KTable = 0x6ABAF78;

    const uintptr_t JobStart = 0x204F140;
    const uintptr_t JobStop = 0x204F5A4;

    const uintptr_t whjs_stepindex = 0x8;
    const uintptr_t whjs_vftablesize = 0x18;
    const uintptr_t whjs_scriptcontext = 0x1A0;

    namespace Signals
    {
        const uintptr_t FireTouchInterest = 0x0; // so ud
        const uintptr_t FireMouseClick = 0x654A638;
        const uintptr_t FireMouseHoverEnter = 0x654A6B8;
        const uintptr_t FireMouseHoverLeave = 0x654A738;
        const uintptr_t FireRightMouseClick = 0x654A7B8;
    }

    namespace Luau
    {
        const uintptr_t Luau_Execute = 0x5B1779C;
        const uintptr_t LuaO_NilObject = 0x7DEB00;
        const uintptr_t LuaH_DummyNode = 0xCDBA10;
        const uintptr_t Luau_Load = 0x5B2DD5C;
    }

    namespace Tasks
    {
        const uintptr_t TaskSynchronize = 0x3A0A070;
        const uintptr_t TaskDesynchronize = 0x3A0A27C;
        const uintptr_t TaskDefer = 0x2249378;
        const uintptr_t TaskSpawn = 0x22610BC;
        const uintptr_t TaskDelay = 0x227E4B8;
        const uintptr_t TaskWait = 0x22B6B78;

    }

    namespace ExtraSpace
    {
        const uintptr_t isCoreScript = 0x150;
    }

}
