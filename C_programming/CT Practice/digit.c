#include <stdlib.h>
#include <stdio.h>

int main () 
{
    int a; 

    scanf("%d", &a);

    int c = printf("%d", a);

    system("clear"); // For linux

    printf("\n%d", c);

    return 0;
}