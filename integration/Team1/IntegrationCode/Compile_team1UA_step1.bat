@SET PATH=C:/Program Files (x86)/Esterel Technologies/SCADE R17/SCADE/bin;%PATH%
@echo off
cd .
call uaadaptor.exe -n "C:\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE Display\config\a661_description\a661.xml"  -k "..\UserApplication\KCG\kcg_trace.xml" -sdy "..\UserApplication\project1.sdy" -outdir "..\UserApplication\KCG" "..\DefinitionFile\project1.sgfx"
pause
