@echo off
REM -- First make map file from Microsoft Visual C++ generated resource.h
echo // MAKEHELP.BAT generated Help Map file.  Used by AIR.HPJ. >"hlp\air.hm"
echo. >>"hlp\air.hm"
echo // Commands (ID_* and IDM_*) >>"hlp\air.hm"
makehm ID_,HID_,0x10000 IDM_,HIDM_,0x10000 resource.h >>"hlp\air.hm"
echo. >>"hlp\air.hm"
echo // Prompts (IDP_*) >>"hlp\air.hm"
makehm IDP_,HIDP_,0x30000 resource.h >>"hlp\air.hm"
echo. >>"hlp\air.hm"
echo // Resources (IDR_*) >>"hlp\air.hm"
makehm IDR_,HIDR_,0x20000 resource.h >>"hlp\air.hm"
echo. >>"hlp\air.hm"
echo // Dialogs (IDD_*) >>"hlp\air.hm"
makehm IDD_,HIDD_,0x20000 resource.h >>"hlp\air.hm"
echo. >>"hlp\air.hm"
echo // Frame Controls (IDW_*) >>"hlp\air.hm"
makehm IDW_,HIDW_,0x50000 resource.h >>"hlp\air.hm"
REM -- Make help for Project AIR


echo Building Win32 Help files
start /wait hcw /C /E /M "hlp\air.hpj"
if errorlevel 1 goto :Error
if not exist "hlp\air.hlp" goto :Error
if not exist "hlp\air.cnt" goto :Error
echo.
if exist Debug\nul copy "hlp\air.hlp" Debug
if exist Debug\nul copy "hlp\air.cnt" Debug
if exist Release\nul copy "hlp\air.hlp" Release
if exist Release\nul copy "hlp\air.cnt" Release
echo.
goto :done

:Error
echo hlp\air.hpj(1) : error: Problem encountered creating help file

:done
echo.
