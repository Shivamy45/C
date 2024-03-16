#include <stdio.h>
#include <string.h>
#include <stdlib.h>ltw1
// ex8 - Employee attendence
int main()
{
    printf("Welcome to ABC Pvt Ltd.\n");
    int num = 4;
    // printf("Enter total number of employees\n");
    // scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {ltw1
        printf("Employee %d:\n", i);

        int n;
        printf("Enter no of characters in your eId\n");
        scanf("%d", &n);

        char *ptr;
        ptr = (char *)malloc(n * sizeof(char));

        printf("Enter your eId number\n");
        scanf("%s", ptr);
        // getchar(); // to avoid the problem as this %c gets skipped after %s
        // char a, b;
        // printf("Enter the value of a\n");
        // scanf("%c", &a);
        // getchar(); // to avoid the problem as this %c gets skipped after %s
        // printf("Enter the value of b\n");
        // scanf("%c", &b);
        if (strlen(ptr) <= n)
        {
            printf("Your eId number is %s\n", ptr);
        }
        else
        {
            printf("Invalid input...\n");
        }

        printf("\n");
        free(ptr);
        // int f;
        // printf("Press 0 to continue\tany other key to end\n");
        // scanf("%d", &f);
        // if (f==0)
        // {
        //     continue;
        // }
        // else
        // {
        //     break;
        // }
    }

    return 0;
}