#include <stdio.h>
// passing array to a function
void fn1(int array[])
{
    for (int i = 0, num = 1; i < 4; i++, num++)
    {
        printf("The value of element %d is %d\n", num, array[i]);
    }
    array[2] = 4; // If we change any value here, it gets reflected in main()
}

void fn2(int *ptrarray)
{
    for (int i = 0, num = 1; i < 4; i++, num++)
    {
        printf("The value of element %d is %d\n", num, *(ptrarray + i));
    }
    *(ptrarray + 2) = 6; // If we change any value here, it gets reflected in main()
    // *(ptrarray + i) = ptrarray[i]
}

void fn3(int arr[4][4])
{
    for (int i = 0, num = 1; i < 2; i++, num++)
    {
        for (int j = 0, num1 = 1; j < 4; j++, num1++)
        {
            printf("The value of element %d,%d is %d\n", num, num1, arr[i][j]);
        }
    }
}

int main()
{
    int arr[] = {11, 15, 16, 10};
    int arr1[2][4] = {{2, 5, 6, 1}, {3, 4, 7, 9}};
    fn1(arr);
    printf("The value of element 3 after fn1 is %d\n", arr[2]);
    // arr[2] = 4;
    fn2(arr);
    printf("The value of element 3 after fn2 is %d\n", arr[2]);
    fn3(arr1);
    printf("Ending...");

    return 0;
}