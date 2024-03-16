#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// command line arguments
/*
argc - total no. of arguments + 1(file_location at 0)
argv - value of arguments
*/
int main(int argc, char const *argv[])
{
    printf("The value of argc is %d\n", argc);  // the intial value of argc is 1.
    /*  give command line arguments in terminal as this ".\file_name.exe argments"  */
    for (int i = 0; i < argc; i++)
    {
        printf("This argument at index number %d has value of %s\n", i, argv[i]);
    }

    return 0;
}
