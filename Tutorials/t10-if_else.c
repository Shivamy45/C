#include <stdio.h>
// if, else if, else
int main()
{
    int age;
    printf("Enter your age ?\n");
    scanf("%d", &age);

    printf("\nAge:%d\n\n", age);

    if (age > 18)
    {
        printf("You are a adult.");
    }
    else if (age > 13)
    {
        printf("You are a teenager.");
    }
    else if (age > 6)
    {
        printf("You are a child.");
    }
    else
    {
        printf("You are a newborn.");
    }

    /*     QUIZ
    math-15
    science-15
    math and science-45     */

    printf("\n\nSelect the subjects in which you're passed\n");

    printf("1.Only Maths   ");
    printf("2.Only Science   ");
    printf("3.Maths and Science   \n");

    int a;
    scanf("%d", &a);

    if (a == 1)
    {
        printf("\nHere is a gift of Rs15 for you.");
    }
    else if (a == 2)
    {
        printf("Here is a gift of Rs15 for you.");
    }
    else if (a == 3)
    {
        printf("Here is a gift of Rs45 for you.");
    }
    else
    {
        printf("You have selected a wrong option.");
    }

    return 0;
}
