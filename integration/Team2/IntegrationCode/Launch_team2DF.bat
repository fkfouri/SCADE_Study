@SET PATH=C:/Program Files (x86)/Esterel Technologies/SCADE R17/SCADE A661/bin;%PATH%

@echo off

cd .

start A661Server.exe "..\DefinitionFile\DF\server_conf.xml" "..\DefinitionFile\DF\UA_2.bin"
