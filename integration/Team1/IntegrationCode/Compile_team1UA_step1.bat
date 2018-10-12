@SET PATH=E:/SCADE/suite/SCADE/bin;%PATH%
@echo off
cd .
call uaadaptor.exe -n "E:\SCADE\suite\SCADE Display\config\a661_description\a661.xml"  -k "..\UserApplication\KCG\kcg_trace.xml" -sdy "..\UserApplication\project1.sdy" -outdir "..\UserApplication\KCG" "..\DefinitionFile\project1.sgfx"
pause
