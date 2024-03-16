#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// guess random number
int generaterandomnumber(int n) // gives a random number between 0 and n
{
    srand(time(NULL)); // srand takes seed as input & is defined inside stlib.h
    return rand() % n;
}
int main()
{
    int genNum = generaterandomnumber(10);
    printf("Computer has generated a number\n");
    printf("Try to guess it minimum moves\n");
    int guessNum;
    int try = 0;
    while (1)
    {
        printf("Enter your guess\n");
        scanf("%d", &guessNum);
        if (guessNum == genNum)
        {
            try++;
            printf("Congratulation\nYou took %d moves to guess it\n", try);
            break;
        }
        else if (guessNum > genNum)
        {
            try++;
            printf("Try lower\n");
        }
        else if (guessNum < genNum)
        {
            try++;
            printf("Try higher\n");
        }
    }

    return 0;
}