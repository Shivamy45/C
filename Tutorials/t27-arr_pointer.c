#include <stdio.h>
// arrays and pointers
int main()
{
    int a = 34;
    int *ptra = &a;
    printf("%p\n", ptra);
    printf("%d\n", *ptra);
    printf("%d\n", *ptra + 2);
    // prtr+2 is calucalated as size of the the int and added 2.
    printf("%p\n", ptra + 2);

    // arr = &arr[0] and arr + i = &arr[i]
    int arr[] = {15, 20, 35};
    printf("The address of first element is %p\n", arr);
    // arr++ or arr-- is invalid
    for (int i = 0; i < 4; i++)
    {
        printf("the value of element %d is %d\n", i + 1, arr[i]);
        printf("the value of element %d is %d\n", i + 1, *(&arr[i]));
        printf("the value of element %d is %d\n", i + 1, *(arr + i));
        printf("the address of element %d is %p\n", i + 1, &arr[i]);
        printf("the address of element %d is %p\n", i + 1, arr + i);
    }

    return 0;
}