#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// void pointer - data type defined later
int main()
{
    int a = 1;
    float b = 2.3;
    void *ptr; // we can use this later as a data type you want
    ptr = &a;
    printf("The value of a is %d\n", *((int *)ptr));
    ptr = &b;
    printf("The value of b is %.1f\n", *((float *)ptr));

    return 0;
}