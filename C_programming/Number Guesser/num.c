#include<stdio.h>
#include <stdlib.h>
#include<time.h>
int main ()
{
    srand(time(NULL));
    int a, b, i;
    b = ((rand()%10)+1);
    printf("-~-GUESS THE NUMBER GAME-~-");
    printf("\n\nyou have 3 lives\n\n");
    for (i = 1; i <= 3; i++)
    {
    printf("Guess a number between 1 to 10:\n");
    scanf("%d", &a);
            if (a==b)
    {
        printf("Congrats, they matched!\n");
        break;
    }
    else if (i==1 | i==2)
    {
        printf("\nTry again!\n\n");
    }
    else if (i==3)
    {
        printf("\nThe number was %d", b);
    }
    }
    getchar();
    getchar();
    
}