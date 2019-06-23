#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//https://docs.python.org/3.5/extending/embedding.html#embedding-python-in-another-application
//https://www.youtube.com/watch?v=mXuEoqK4bEc

void getHash(char *text){

    char cmdPython[1024] = "python.exe md5lib.py ";
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

void string2Int(void)//char *text)
{
/*
    // parsing with error handling
    const char *p = "10 200000000000000000000000000000 30 -40 junk";
    printf("Parsing '%s':\n", p);
    char *end;
    for (long i = strtol(p, &end, 10);
         p != end;
         i = strtol(p, &end, 10))
    {
        //printf("'%.*s' -> ", (int)(end-p), p);
        p = end;
        if (errno == ERANGE){
            printf("range error, got ");
            errno = 0;
        }
        printf("%ld\n", i);
    }

    // parsing without error handling
    printf("\"1010\" in binary  --> %ld\n", strtol("1010",NULL,2));
    printf("\"12\" in octal     --> %ld\n", strtol("12",NULL,8));
    printf("\"A\"  in hex       --> %ld\n", strtol("A",NULL,16));
    printf("\"junk\" in base-36 --> %ld\n", strtol("junk",NULL,36));
    printf("\"012\" in auto-detected base  --> %ld\n", strtol("012",NULL,0));
    printf("\"0xA\" in auto-detected base  --> %ld\n", strtol("0xA",NULL,0));
    printf("\"junk\" in auto-detected base -->  %ld\n", strtol("junk",NULL,0));

*/

}






int main(void)
{
    char msg[32] = "fabio";

 //printf("\"1010\" in binary  --> %ld\n", strtol("000123",NULL,10));

    int *test;

    printf("===========\n");
    printf("teste -> %i\n", test) ;
    printf("============\n");


    int someInt = 368;
//char str[12];
//sprintf(str, "%d", someInt);

char _size[12];
char numb[12];
sprintf(_size, "%%0%id",8);
printf("_size: %s\n", _size);

sprintf(numb, _size, 123);
printf("numb: %s\n", numb);



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
