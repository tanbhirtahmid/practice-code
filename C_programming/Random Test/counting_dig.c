#include <stdio.h>

int main() {
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    int k = printf("%d", n);

    for (int i = 0; i < k; i++)
    {
        printf("\b");
    }
    
    printf("The number has %d digits", k);
    
    return 0;
}