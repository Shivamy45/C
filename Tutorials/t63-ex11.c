#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// ex11 - Palindrome number - that is same from both ends. For ex. 232, 2002, 1234321
int isPalindrome(int number)
{
    int revNum = 0;
    int tempNum = number;
    while (tempNum != 0)
    {
        revNum = (revNum * 10) + (tempNum % 10);
        tempNum = tempNum / 10;
    }
    printf("This is the reversed number - %d\n", revNum);
    if (revNum == number)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int number;
    printf("Enter a number to check whether it's a Palindrome or not\n");
    scanf("%d", &number);
    if (isPalindrome(number))
    {
        printf("The number is a Palindrome\n");
    }
    else
    {
        printf("The number is not a Palindrome\n");
    }

    return 0;
}