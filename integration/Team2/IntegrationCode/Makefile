ROOT=./
CC_FLAGS=-ansi -I . -I ../UserApplication/KCG/ -I ../../CommunicationFramework/ -I "E:/SCADE/suite/SCADE/" -I "E:/SCADE/suite/SCADE/include/C/" -Wall -Wno-unused-variable -Wno-unused-function -Wno-unused-value
SRC=team2UA.c ../../CommunicationFramework/CommunicationFramework.c ../UserApplication/KCG/kcg_consts.c ../UserApplication/KCG/kcg_types.c ../UserApplication/KCG/project2.c ../UserApplication/KCG/ua.c ../UserApplication/KCG/ua_LAY_1.c ../UserApplication/KCG/ua_private.c

OBJ=$(SRC:.c=.o)

team2UA.exe: $(OBJ)
	gcc -o $@ $(OBJ)

.c.o:
	gcc $(CC_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) team2UA.exe

.PHONY: clean
