#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*
fgetc(ptr)
fgets(str , sizeof , ptr)
fputc('char', ptr)
fputs("text", ptr)
r+ - read and write - it overwrite character by character from start
w+ - both read and write - if file exist it will clear and write, otherwise it will create a file
a+ - both read and addon - it also create a file if it does not exist and addon on end
*/
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("t67-trial.txt", "a+");
    // char c = fgetc(ptr);
    // printf("This is the first character of the text '%c'\n", c);

    char str[10];
    fgets(str, 8, ptr);
    printf("This is the first string of the text '%s'\n", str);

    // fputc('o', ptr);
    fputs("this is new", ptr);

    fclose(ptr);

    return 0;
}