#include <stdio.h>

void reprint(long long int p)
{
    for (int i = 0; p!=0 ; i++)
    {
        int temp;
        temp = p % 10;
        p/=10;
        printf("%d ", temp);
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    long long int n[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%lld", &n[i]);
    }

    for (int i = 0; i < t; i++)
    {
        reprint(n[i]);
    }
    
    
    return 0;
}