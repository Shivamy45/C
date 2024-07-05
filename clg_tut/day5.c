#include <stdio.h>
#include <string.h>

int main()
{
    // count the even and odd numbers in array and find the sum of even and odd numbers and also print all even and odd numbers
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, odd[10], even[10];
    // int count_even = 0, count_odd = 0, sum_even = 0, sum_odd = 0;
    // for (int i = 0; i < 10; i++)
    // {
    //     if (arr[i] % 2 == 0)
    //     {
    //         even[count_even] = arr[i];
    //         count_even++;
    //         sum_even += arr[i];
    //     }
    //     else
    //     {
    //         odd[count_odd] = arr[i];
    //         count_odd++;
    //         count_odd += arr[i];
    //     }
    // }
    // printf("Count of even numbers: %d\n", count_even);
    // printf("Count of odd numbers: %d\n", count_odd);
    // printf("Sum of count_even numbers: %d\n", sum_even);
    // printf("Sum of count_odd numbers: %d\n", sum_odd);
    // for (int j = 0; j < count_even; j++)
    // {
    //     printf("%d ", even[j]);
    // }
    // printf("\n");
    // for (int k = 0; k < count_odd; k++)
    // {
    //     printf("%d ", odd[k]);
    // }
    // char str[10];
    // int n;
    // printf("Enter a string: ");
    // fgets(str, 10, stdin);
    // n = strlen(str);
    // puts(str);
    // printf("Length of str = %d", n);

    // char str[10], str2[10];
    // printf("Enter a string: ");
    // fgets(str, 10, stdin);
    // strcpy(str2, str);
    // puts(str2);
    // int res = strcmp(str, str2);
    // printf("%d", res);

    // char str1[10], str2[10], str3[30];
    // printf("Enter a string: ");
    // fgets(str1, 10, stdin);
    // printf("Enter a string: ");
    // fgets(str2, 10, stdin);
    // strcpy(str3, str1);
    // strcat(str3, str2);
    // puts(str3);
    // if (strlen(str3) >= 18)
    // {
    //     strdup(str3);
    // }
    // else
    // {
    //     strlwr(str3);
    // }

    // wap to calculate the length of a string without using strlen()
    char str[10];
    int i = 0;
    printf("Enter a string: ");
    fgets(str, 10, stdin);
    while (str[i] != '\0')
    {
        i++;
    }
    printf("Length of str = %d", i);

    return 0;
}