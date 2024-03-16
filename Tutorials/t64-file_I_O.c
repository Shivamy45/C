#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// File I/O
/*
Volatile Memory - Hold data temporarily - RAM
Non Volatile Memory - Hold data long time even when not powered - Hard Disk(as files)
*/
/*
r - only read - fscanf
w - overwrite - fprintf
a - addon
*/
int main()
{
    FILE *ptr = NULL;

    // ************ Reading a file ************
    ptr = fopen("t64-trial.txt", "r");
    char string[30];
    fscanf(ptr, "%s", string);
    printf("The content of trial.txt file has '%s'\n", string);

    // ************ OverWriting a file ************
    ptr = fopen("t64-trial.txt", "w");
    char string1[50] = "This content overwrite the existing content\n";
    fprintf(ptr, "%s", string1);

    // ************ Writing a file ************
    ptr = fopen("t64-trial.txt", "a");
    char string2[50] = "This content gets added in the existing content\n";
    fprintf(ptr, "%s", string2);

    return 0;
}