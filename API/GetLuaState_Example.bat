@echo off
chcp 65001 > nul
setlocal enabledelayedexpansion

set "URL=https://raw.githubusercontent.com/Offsetmanager/Roblox-Internal-External-Offsets/refs/heads/main/API/Server/LiveOffsetsAndStruct.txt"
set "TARGET_KEY=GetLuaState"

echo Loading from github...
echo Searching key: %TARGET_KEY%
echo ----------------------------------------

for /f "tokens=1* delims==" %%A in ('curl -s -L "%URL%" ^| findstr /C:"%TARGET_KEY%"') do (
    set "KEY=%%A"
    set "VAL=%%B"
    
    for /f "tokens=*" %%x in ("!KEY!") do set "KEY=%%x"
    for /f "tokens=*" %%x in ("!VAL!") do set "VAL=%%x"
    set "VAL=!VAL:;=!"

    echo Real value: !VAL!

    echo !VAL! | findstr /I "REBASE" > nul
    if !errorlevel! equ 0 (
        for /f "tokens=2 delims=()" %%C in ("!VAL!") do (
            echo Value without REBASE: %%C
        )
    )
)

pause
