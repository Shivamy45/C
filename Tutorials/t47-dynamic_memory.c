#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// dynamic memory location
/*
1.malloc: ptr = (ptr-type*) malloc(size_in_bytes); // it initialize to garbage
2.calloc: ptr = (ptr-type*) calloc(n, size_in_bytes); // it initialize to 0
3.realloc: ptr = (ptr-type*) realloc(ptr, new_size_in_bytes); // reallocate ptr
4.free: free(ptr); // free your allocated memory
*/
int n;

void input(int *ptr)
{
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value of element %d\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value at element %d is %d\n", i, ptr[i]);
    }
}
void input1(int *ptr)
{
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the new value of element %d\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The new value at element %d is %d\n", i, ptr[i]);
    }
}

int main()
{
    // printf("Enter the size of the array you want\n");
    // scanf("%d", &n);

    int *ptr;
    ptr = (int *)malloc(3 * sizeof(int));
    // it gives garbage for no value
    // input(ptr);
    // free(ptr);
    // input1(ptr);

    // int *ptr1;
    // ptr1 = (int *)calloc(n, sizeof(int));
    // it gives 0 for no value - try to avoid this
    // input(ptr1);

    // printf("Enter the new size of the arrays you want\n");
    // scanf("%d", &n);
    // ptr = (int *)realloc(ptr, n * sizeof(int));
    // it reallocate the size of ptr
    // input(ptr);
    // ptr1 = (int *)realloc(ptr1, n * sizeof(int));
    // input(ptr1);

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", ptr[i]);
    }
    // free(ptr);
    printf("\n\nStarting the next loop\n\n");
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", ptr[i]);
    }

    return 0;
}