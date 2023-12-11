call "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\VCVARSALL.BAT " x86

cd .
nmake -f speed_controller_copy.mk  ISPROTECTINGMODEL=NOTPROTECTING EXT_MODE=1
@if errorlevel 1 goto error_exit
exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
An_error_occurred_during_the_call_to_make