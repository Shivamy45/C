#include <stdio.h>
// goto statement - goto label and goto end
int main()
{
    for (int i = 0; i < 5; i++)
    {
        int num;
        printf("%d_1st loop\n", i);
        for (int j = 0; j < 9; j++)
        {
            printf("Enter %d to exit from this 2nd loop\n", j);
            scanf("%d", &num);
            if (num == j)
            {
                goto end;
            }
        }
    }
end:
    printf("loop ended");

    return 0;
}
