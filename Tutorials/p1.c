#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// ex9 - rock paper scissor
int generaterandomnumber(int n) // gives a random number between 0 and n
{
    srand(time(NULL)); // srand takes seed as input & is defined inside stlib.h
    return rand() % n;
}
int main()
{
    printf("Welcome to Rock Paper Scissor\n");
    char *name;
    char in[3] = {'r', 'p', 's'};
    name = (char *)malloc(20 * sizeof(char));
    printf("Enter your name to play the game\n");
    scanf("%s", name);
play:
    printf("\tGame starts...\t%s vs computer\n", name);
    static int uwin = 0, cwin = 0;
    for (int i = 1, input, grn; i < 4; i++)
    {
        printf("Press\t1 for Rock\t2 for Paper\t3 for Scissor\n");
        scanf("%d", &input);
        getchar();
        grn = generaterandomnumber(3) + 1; // to get a random number 0 =< num < 3
        /* grn will be 0, 1 or 2 so to avoid 0 we will do grn++ so
            0 -> 1
            1 -> 2
            2 -> 3
        */
        printf("You chose %c\n", in[input - 1]);
        printf("Computer chose %c\n", in[grn-1]);
        if (input == 1)
        {
            if (grn == 1)
            {
                printf("Its a draw\n");
            }
            else if (grn == 2)
            {
                printf("Computer wins this round\n");
                cwin++;
            }
            else if (grn == 3)
            {
                printf("You won this round\n");
                uwin++;
            }
        }
        else if (input == 2)
        {
            if (grn == 1)
            {
                printf("You won this round\n");
                uwin++;
            }
            else if (grn == 2)
            {
                printf("Its a draw\n");
            }
            else if (grn == 3)
            {
                printf("Computer wins this round\n");
                cwin++;
            }
        }
        else if (input == 3)
        {
            if (grn == 1)
            {
                printf("Computer wins this round\n");
                cwin++;
            }
            else if (grn == 2)
            {
                printf("You won this round\n");
                uwin++;
            }
            else if (grn == 3)
            {
                printf("Its a draw\n");
            }
        }
        else
        {
            printf("Invalid input\n");
        }
        printf("Scorecard\n");
        printf("Your score: %d\n", uwin);
        printf("Computer score: %d\n", cwin);
    }
    if (cwin > uwin)
    {
        printf("\tComputer won.\n");
    }
    else if (uwin > cwin)
    {
        printf("\tYou won.\n");
    }
    else
    {
        printf("\tIts a draw\n");
    }
    char r;
    printf("Enter r to play again or any other key to exit:\n");
    scanf("%c", &r);
    if (r == 'r')
    {
        uwin = 0, cwin = 0;
        goto play;
    }
    free(name);

    return 0;
}