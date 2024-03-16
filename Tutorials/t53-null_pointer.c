#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// null pointer - points to NULL - (void*)0
int main()
{
    int a = 1;
    int *ptr = NULL; // we can give define this later till then it cannot be referenced
    ptr = &a;        // defining a null pointer to a valid pointer
    if (ptr != NULL)
    {
        printf("The address of a is %d\n", ptr);
        printf("The value of a is %d\n", *ptr);
    }
    else
    {
        printf("The pointer is a NULL pointer and cannnot be dereferenced\n");
    }

    return 0;
}