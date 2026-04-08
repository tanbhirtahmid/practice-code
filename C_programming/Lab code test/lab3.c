#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int sum = a+b;
    if (abs(sum) >= 100)
    {
        printf("YES");
    }
    else printf("NO");

    return 0;
    
}