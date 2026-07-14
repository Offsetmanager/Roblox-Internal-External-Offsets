@echo off
chcp 65001 > nul
setlocal disabledelayedexpansion
title Offsets by OffsetManager

set "TempVers=%TEMP%\rblx_vers_%RANDOM%.txt"
set "CurrentVersion=Unknown"
set "FutureVersion=Unknown"

powershell -NoProfile -Command "$ErrorActionPreference='SilentlyContinue'; [Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12; $j = (New-Object Net.WebClient).DownloadString('https://raw.githubusercontent.com/Offsetmanager/Roblox-Internal-External-Offsets/refs/heads/main/API/version.json') | ConvertFrom-Json; if ($j) { Write-Output ($j.current + ',' + $j.future) }" > "%TempVers%"

if exist "%TempVers%" (
    for /f "usebackq tokens=1,2 delims=," %%A in ("%TempVers%") do (
        set "CurrentVersion=%%A"
        set "FutureVersion=%%B"
    )
    del "%TempVers%" >nul 2>&1
)

if "%CurrentVersion%"=="Unknown" echo [!] Warning: Failed to fetch version.json from GitHub (Offline or Timeout).

:menu
echo.
echo Select an option:
echo 1. Get current internal offsets
echo 2. Get current external offsets
echo 3. Get current fflags
echo 4. Get future internal offsets
echo 5. Get future external offsets
echo 6. Get future fflags
echo 7. Get your internal offsets
echo 8. Get your external offsets
echo 9. Get your fflags
echo 10. Exit
echo.
set /p choice="Enter option (1-10): "

if "%choice%"=="1" set "TargetVer=%CurrentVersion%"&set "TargetFile=Internal_Offsets.txt"&goto :fetch
if "%choice%"=="2" set "TargetVer=%CurrentVersion%"&set "TargetFile=External_Offsets.txt"&goto :fetch
if "%choice%"=="3" set "TargetVer=%CurrentVersion%"&set "TargetFile=FFlags.txt"&goto :fetch
if "%choice%"=="4" set "TargetVer=%FutureVersion%"&set "TargetFile=Internal_Offsets.txt"&goto :fetch
if "%choice%"=="5" set "TargetVer=%FutureVersion%"&set "TargetFile=External_Offsets.txt"&goto :fetch
if "%choice%"=="6" set "TargetVer=%FutureVersion%"&set "TargetFile=FFlags.txt"&goto :fetch
if "%choice%"=="7" set "TargetFile=Internal_Offsets.txt"&goto :detect_your
if "%choice%"=="8" set "TargetFile=External_Offsets.txt"&goto :detect_your
if "%choice%"=="9" set "TargetFile=FFlags.txt"&goto :detect_your
if "%choice%"=="10" goto :end

echo [!] Invalid choice, please try again.
goto :menu

:detect_your
set "TempPath=%TEMP%\rblx_path_%RANDOM%.txt"
powershell -NoProfile -Command "$ErrorActionPreference='Stop'; try { $p = Get-Process -Name 'RobloxPlayerBeta'; Write-Output (Get-Item $p[0].Path).Directory.Name } catch {}" > "%TempPath%"

set "TargetVer="
if exist "%TempPath%" (
    for /f "usebackq delims=" %%A in ("%TempPath%") do set "TargetVer=%%A"
    del "%TempPath%" >nul 2>&1
)

if not defined TargetVer (
    echo [!] You need to launch Roblox first.
    goto :menu
)

:fetch
echo.
echo Fetching data for version %TargetVer% (%TargetFile%)...

set "TargetUrl=https://raw.githubusercontent.com/Offsetmanager/Roblox-Internal-External-Offsets/refs/heads/main/Windows/%TargetVer%/%TargetFile%"

powershell -NoProfile -Command "[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12; try { $res = Invoke-WebRequest -Uri '%TargetUrl%' -UseBasicParsing -ErrorAction Stop; Write-Output $res.Content } catch { if ($_.Exception.Response.StatusCode.value__ -eq 404 -or $_.Exception.Message -match '404') { Write-Output 'Not updated!' } else { Write-Output ('Request error: ' + $_.Exception.Message) } }"

echo.
pause
goto :menu

:end
echo --------------------------------------------------
pause
