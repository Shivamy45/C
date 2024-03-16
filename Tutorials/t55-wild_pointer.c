#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// Wild pointer - Uninitialized pointer - should be avoided
int main()
{
    int a = 6;
    int *ptr; // Wild pointer
    // *ptr = 34; // this is not a good thing to do
    ptr = &a;
    printf("The value of a is %d\n", *ptr);

    return 0;
}