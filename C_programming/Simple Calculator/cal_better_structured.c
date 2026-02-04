# include <stdio.h>
# include <stdlib.h>

int menu;

void start() // This is the actual menu
{
    system("cls");  // Windows
    printf("\n\nWelcome to my simple Calculator!\n 1. Addition\n 2. Substraction\n 3. Multiplication\n 4. Division\n 5. Quit\n\n PLEASE ENTER THE NUMBER OF AN OPTION: ");
    scanf("%d", &menu);
}

void end() // This shows up at the end
{
        printf("\npress enter to go back to the menu\n");
        getchar();
        getchar();
}

int main () // This is where the actaul calculation happens
{
    start:
    start();
    if (menu==5)
    {
        exit(0);
    }
    else if(menu >=1 && menu<=4)
   {    printf("Enter two integers:\n");    
        float a, b;
        scanf("%f", &a);
        printf("+\n");
        scanf("%f", &b);
    }
    else 
    menu=6;
    switch (menu)
    {
    case 1:
        printf("=%f\n", a+b);
        break;
    case 2:
        printf("=%f\n", a-b);
        break;
    case 3:
        printf("=%f\n", a*b);
        break;
    case 4:
        printf("=%f\n", a/b);
        break;
    case 6:
        printf("\nERROR\n");
        break;
    }

    end();
    goto start;
    return 0;
}