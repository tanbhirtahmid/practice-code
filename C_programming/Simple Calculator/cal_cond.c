# include <stdio.h>

int main () {
    int a, b, menu;
    printf("Welcome to my simple Calculator!\n 1. Addition\n 2. Substraction\n 3. Multiplication\n 4. Division\n\n PLEASE ENTER THE NUMBER OF AN OPTION: ");
    scanf("%d", &menu);
    if (menu==1)
    {
        printf("Enter two integers:\n");    
        scanf("%d", &a);
        printf("+\n");
        scanf("%d", &b);
        printf("=%d\n", a+b);
    }
    else if (menu==2)
    {
        printf("Enter two integers:\n");    
        scanf("%d", &a);
        printf("-\n");
        scanf("%d", &b);
        printf("=%d\n", a-b);
    }
    else if (menu==3)
    {
        printf("Enter two integers:\n");    
        scanf("%d", &a);
        printf("×\n");
        scanf("%d", &b);
        printf("=%d\n", a*b);
    }
    else if (menu==4)
    {
        float c, d;
        printf("Enter two integers:\n");    
        scanf("%f", &c);
        printf("÷\n");
        scanf("%f", &d);
        printf("=%f\n", c/d);
    }
    else
    printf("\n ~ERROR~ \n");
    
    
    
    
    return 0;
}