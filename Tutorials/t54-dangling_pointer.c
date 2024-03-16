#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// Dangling Pointer - that points deleted thing

// int *myFunc()
// {
//     int b = 9;
//     return &b; //returning address of local variable is invalid
// }
int main()
{
    // Case 1: De allocation of a memory block
    int *dptr1 = (int *)malloc(3 * sizeof(int));
    dptr1[0] = 1;
    dptr1[1] = 2;
    dptr1[2] = 3;
    printf("%x\n", dptr1);
    printf("%d\n", *dptr1);
    free(dptr1); // Dangling pointer - Not pointing anything
    printf("%x\n", dptr1);
    printf("%d\n", *dptr1);
    dptr1 = NULL; // Dangling pointer --> NULL pointer

    // Case 2: Function returning local variable address
    // int *dptr2 = myFunc(); // Dangling pointer - Pointing to local variable of another func(myFunc)

    // Case 3: Variable goes out of scope
    int *dptr3;
    // scope starts
    {
        int i = 3;
        dptr3 = &i;
    }
    // scope ends
    // Danging pointer - Pointing to out of scope variable

    return 0;
}