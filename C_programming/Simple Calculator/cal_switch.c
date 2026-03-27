# include <stdio.h>
# include <stdlib.h>
int main () {
    start:
    system("cls");  // Windows Only Command
    int menu, a, b;
    printf("\n\nWelcome to my simple Calculator!\n 1. Addition\n 2. Substraction\n 3. Multiplication\n 4. Division\n 5. Quit\n\n PLEASE ENTER THE NUMBER OF AN OPTION: ");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
        printf("Enter two integers:\n");    
        scanf("%d", &a);
        printf("+\n");
        scanf("%d", &b);
        printf("=%d\n", a+b);
        printf("\npress enter to go back to the menu\n");
        getchar();
        getchar();
        goto start;
    case 2:
        printf("Enter two integers:\n");    
        scanf("%d", &a);
        printf("-\n");
        scanf("%d", &b);
        printf("=%d\n", a-b);
        printf("\npress enter to go back to the menu\n");
        getchar();
        getchar();
        goto start;
    case 3:
        printf("Enter two integers:\n");    
        scanf("%d", &a);
        printf("x\n");
        scanf("%d", &b);
        printf("=%d\n", a*b);
        printf("\npress enter to go back to the menu\n");
        getchar();
        getchar();
        goto start;
    case 4:
        float c, d;
        printf("Enter two integers:\n");    
        scanf("%f", &c);
        printf("\\\n");
        scanf("%f", &d);
        printf("=%f\n", c/d);
        printf("\npress enter to go back to the menu\n");
        getchar();
        getchar();
        goto start;
    case 5:
        break;
    default:
        printf("\nERROR\n");
        printf("\npress enter to go back to the menu\n");
        getchar();
        getchar();
        goto start;
    }
    return 0;
}