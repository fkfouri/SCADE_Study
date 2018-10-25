// Autor: Fabio Kfouri
// Data: 23/10/2018
// Objetivo: Conversao de Vetor numerico para Inteiro

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kcg_types.h"

kcg_int32 convert2Int(/* Send/ */ T_String_5 *Send) 
/*void convert2Int(char *Send, int *Value )*/
{
    int xpto = strtol(*Send, NULL, 10);
    return xpto;
}


//void convert2Char(char *Send, int *Value )
void convert2Char(/* Send/ */ kcg_int32 *Send, /* Size/ */ kcg_int32 *Size, /* Output/ */ char *Output) 
{
	char temp[10];
	sprintf(temp, "%%0%id", Size);

	char numb[100];
	sprintf(numb, temp, Send);

	strcpy(Output, numb);

}