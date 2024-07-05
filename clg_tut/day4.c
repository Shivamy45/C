#include <stdio.h>
#include <math.h>

// float compound_interest(float p, float r, float t, int n)
// {
//     float amount = p * pow((1 + r / 100 / n), n * t);
//     return amount;
// }

// int changeNum(int n)
// {
//     int num = 0;
//     int i = 0;
//     while (n != 0)
//     {
//         num += pow(10, i) * ((n % 10 == 0) ? 1 : 0);
//         n /= 10;
//         i++;
//     }

//     return num;
// }

// int gcd(int a, int b)
// {
//     while (b != 0)
//     {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

int main()
{
    // float p, r, t;
    // int n;
    // printf("p amount: ");
    // scanf("%f", &p);
    // printf("Interest r (in percentage): ");
    // scanf("%f", &r);
    // printf("Enter the t (in years): ");
    // scanf("%f", &t);
    // printf("Enter the number of ts interest is compounded per year: ");
    // scanf("%d", &n);
    // float result = compound_interest(p, r, t, n);
    // printf("The amount after %.2f years is: %.2f\n", t, result);

    // int n = 1010101;
    // int a = changeNum(n);
    // printf("%d", a);

    // int num1 = 32, num2 = 64;
    // int gcd1 = gcd(num1, num2);
    // printf("%d", gcd1);

    // int n;
    // printf("Enter the number: ");
    // scanf("%d", &n);
    // int a{n}, i;
    // for (i = 0; i < n; i++)
    // {
    //     printf("Enter the number: ");
    //     scanf("%d", &a{i});
    // }
    // printf("Elements of array are: ");
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d ", a{i});
    // }
    // printf("\n");
    // int sum = 0, count_even = 0, count_odd = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (a{i} % 2 == 0)
    //     {
    //         count_even++;
    //     }
    //     else
    //     {
    //         count_odd++;
    //     }
    // }
    // printf("even number = %d, odd numbers = %d", count_even, count_odd);
    // int a = 5;
    // printf("%d\n", a);
    // printf("%d\n", ++a);
    // printf("%d\n", a++);
    // printf("%d\n", --a);
    // printf("%d\n", a--);

    // int arr[2][5] = {{1, 4, 5, 2, 6}, {3, 4, 5, 3, 6}};
    // int max = arr[0][0], min = arr[0][0];
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         if (arr[i][j] > max)
    //         {
    //             max = arr[i][j];
    //         }
    //         if (arr[i][j] < min)
    //         {
    //             min = arr[i][j];
    //         }
    //     }
    // }
    // printf("%d is maximum and %d is minimum", max, min);

    // int arr[5];
    // int pos = 0, key;
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Enter number %d : ", i + 1);
    //     scanf("%d", &arr[i]);
    // }
    // printf("Enter key : ");
    // scanf("%d", &key);
    // for (int i = 0; i < 5; i++)
    // {
    //     if (key == arr[i])
    //     {
    //         pos = i + 1;
    //     }
    // }
    // if (pos == 0)
    // {
    //     printf("Element Not Found");
    // }
    // else
    // {
    //     printf("Element found at position %d\n", pos);
    // }

    // int n = 7;
    // int a[7] = {7, 3, 5, 2, 7, 5, 9};
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (a[i] < a[j])
    //         {
    //             int temp = a[i];
    //             a[i] = a[j];
    //             a[j] = temp;
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", a[i]);
    // }

    // WAP to print avg of 10 integers
    // int n = 10;
    // int marks[10];
    // int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter marks of student %d : ", i + 1);
    //     scanf("%d", &marks[i]);
    //     sum += marks[i];
    // }
    // printf("Average of 10 student marks are : %d", sum / 10);

    // WAP to find out the second largest element from a given list of integers
    // int n = 5;
    // int arr[5] = {5, 1, 2, 3, 4};
    // int max = 0;
    // int sec_max = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > max)
    //     {
    //         sec_max = max;
    //         max = arr[i];
    //     }
    //     else if (arr[i] > sec_max && arr[i] != max)
    //     {
    //         sec_max = arr[i];
    //     }
    // }
    // printf("Second largest element is : %d\n", sec_max);

    return 0;
}