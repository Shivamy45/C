#include <stdio.h>
// ex5 - Reversal of array
void arrayRev(int arr[])
{
    for (int i = 0, swap; i < 7 / 2; i++)
    {
        swap = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = swap;
    }
}

int printArr(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

int revprintArr(int arr[])
{
    for (int i = 6; i >= 0; i--)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    printf("This is the array\n");
    printArr(arr);

    printf("Printing reverse using loop\n");
    revprintArr(arr);

    printf("Reversing the array then printing\n");
    arrayRev(arr);
    printArr(arr);

    return 0;
}