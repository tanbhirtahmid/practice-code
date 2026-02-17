#include <stdio.h>
#define N 10

int main () {
    char a[N], i;
    printf("Enter a %d word:\n", N);
    for ( i = 0; i < N; i++)
    {
        scanf("%c", &a[i]);
    }
    printf("\n");

    for ( i = 0; i < N; i++)
    {
        printf("%c", a[i]);
    }
    
    
    return 0;
}