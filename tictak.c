#include <stdio.h>
int a[10] = {49, 50, 51, 52, 53, 54, 55, 56, 57};  
int check()
{
    if (a[0] == a[1] && a[1] == a[2])
        return 1;
    else if (a[0] == a[3] && a[3] == a[6])
        return 1;
    else if (a[0] == a[4] && a[4] == a[8])
        return 1;
    else if (a[3] == a[4] && a[4] == a[5])
        return 1;
    else if (a[6] == a[7] && a[7] == a[8])
        return 1;
    else if (a[1] == a[4] && a[4] == a[7])
        return 1;
    else if (a[2] == a[5] && a[5] == a[8])
        return 1;
    else if (a[2] == a[4] && a[4] == a[6])
        return 1;
    else
        return 0;
}

void fram()
{
    printf("\n\t\t         |         |         ");
    printf("\n\t\t    %c    |    %c    |    %c    ", a[0], a[1], a[2]);
    printf("\n\t\t_________|_________|_________");
    printf("\n\t\t         |         |         ");
    printf("\n\t\t    %c    |    %c    |    %c    ", a[3], a[4], a[5]);
    printf("\n\t\t_________|_________|_________");
    printf("\n\t\t         |         |         ");
    printf("\n\t\t    %c    |    %c    |    %c    ", a[6], a[7], a[8]);
    printf("\n\t\t         |         |         ");
}

int main()
{
    printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\n\t\t WellCom to Tic Tak Game in C language :\n ");
    printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\n ----------------------player 1 Use 'X'------------ \n\t -------------------player 2 Use 'O'-------------------------\n  ");


    fram();
    int ck = 0, m = 1;
    while (ck == 0)
    {
        int pl1, pl2, i = 1;
        while (i == 1)
        {

            printf("\n Enter the player 1 :");
            scanf("%d", &pl1);
            m += 1;
            if (a[pl1 - 1] == 'X' || a[pl1 - 1] == 'O')
            {
                printf("I t's  fill already \n please ! enter vaild number : \n ");
            }
            else
                i = 0;
        }

        a[pl1 - 1] = 'X';
        fram();

        if (check() == 1)  // if player 1 is win 
        {
            printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
            printf(" \n \t\tCongarualtion !Player 1 is Win \n  ");
            printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
            break;
        }

        i = 1;
        if (m == 10)  // Check player for Draw the player 
        {
            printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
            printf("\t\n _________________________DRAW Match _________________________________\n");
            printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
            break;
        }
        while (i == 1) 
        {
            printf("enter teh player 2 :");
            scanf("%d", &pl2);
            m += 1;

            if (a[pl2 - 1] == 'X' || a[pl2 - 1] == 'O')
            {
                printf(" \t !!!!it's  fill already!!!!! \n please  enter vaild number :");
            }
            else
                i = 0;
        }
        a[pl2 - 1] = 'O';
        fram();

        if (check() == 1) // Check player 2 in win 
        {
            printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
            printf(" \n \t\t Congarualtion !Player 2  is Win \n  ");
            printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
            break;
        }
    }
    return 0;
}