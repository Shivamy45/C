#include <stdio.h>
// break and continue statements
int main()
{
    int i, age;
    for (i = 1; i <= 11; i++)
    {
        printf("Enter your age\n");
        scanf("%d", &age);

        if (age < 10)
        {
            printf("you are underage\n");
            continue;
        }
        else
        {
            if (i < 11)
            {
                printf("Registeration completed.\n");
                printf("Your roll number is %d.\n", i);
            }
            else
            {
                printf("Registeration failed, time completed.");
                break;
            }
        }
    
    }
    
    return 0;
}
