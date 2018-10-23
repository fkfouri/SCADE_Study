#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <

//https://docs.python.org/3.5/extending/embedding.html#embedding-python-in-another-application
//https://www.youtube.com/watch?v=mXuEoqK4bEc

void getHash(char *text){

    char cmdPython[1024] = "C:/Python35/python.exe md5lib.py ";
    //concatena comando com argumento Python
    strcat(cmdPython, text);
    //printf(cmdPython);

    //Leitura dos resultados do comando
    FILE *popen(const char *command, const char *mode);
    int pclose(FILE *stream);

    FILE *cmd;
    cmd = popen(cmdPython, "r");

    if (cmd == NULL) {
        perror("popen");
        exit(EXIT_FAILURE);
    }

    int i = 0;
    char hashCode[33];
    //hashCode = (char *)malloc(33*sizeof(char));

    char result[1024];
    while (fgets(result, sizeof(result), cmd)) {
        //printf("Line %i -> %s", i, result);
        strcpy(hashCode, result);
        //printf("====================");
        //printf("%s", result);
         i++;
    }
    pclose(cmd);

    //printf(hashCode);
    //printf(&hashCode);

    //return hashCode;

    strcpy(text, hashCode);
}

int main(void)
{
    char msg[32] = "fabio";

    getHash(msg);
    printf("%s",msg );
    //printf("Hello wor1ld!\n");
    //printf("teste2!\n");
    //return 0;
    //system("dir / w");

    //char cmdPython = "C:\Python35\python.exe md5lib.py fabio";

    /*
    FILE *cmd;
    char result[1024];

    //cmd = popen("dir / w", "r");

    cmd = popen("C:/Python35/python.exe md5lib.py fabio", "r");

    if (cmd == NULL) {
        perror("popen");
        exit(EXIT_FAILURE);
    }

    int i = 0;
    char *hashCode[33];

    while (fgets(result, sizeof(result), cmd)) {
        //printf("Line %i -> %s", i, result);
        strcpy(hashCode, result);
        //printf("====================");
        //printf("%s", result);
         i++;
    }
    pclose(cmd);

    printf(hashCode);
    return 0;
    */





}
