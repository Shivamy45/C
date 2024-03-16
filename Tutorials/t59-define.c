#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "t58-preprocessing.c" // doing this we can use global file code of that file in this c code
#define PI 3.14
#define SQUARE(r) r *r
// #include and #define preprocessor directives
int main()
{
    int var = 7;
    printf("This is var - %d\n", var);
    int r = 3;
    printf("Square of r is %d\n", SQUARE(r));
    printf("%.2f\n", PI);
    printf("This is a non main variable of t58.c < %d >\n", temp);

    return 0;
}
