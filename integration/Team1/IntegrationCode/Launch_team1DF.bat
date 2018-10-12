@SET PATH=E:/SCADE/suite/SCADE A661/bin;%PATH%

@echo off

cd .

start A661Server.exe "..\DefinitionFile\DF\server_conf.xml" "..\DefinitionFile\DF\UA_1.bin"
