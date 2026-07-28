#include <stdio.h>

int maxdig(int n, int h)
{
    if(n % 10 > h)
    {
        h = n % 10;
    }
    if (n==0)
    {
        return h;
    }
    return maxdig(n/10, h);
}

int main() {
    int n;
    scanf("%d", &n);

    // int high=-1;

    // maxdig()

    printf("%d", maxdig(n, -1));

    return 0;
}