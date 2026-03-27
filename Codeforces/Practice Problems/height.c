#include <stdio.h>

int main () {
    int n, h, w=0;
    scanf("%d %d", &n , &h);
    int ph[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ph[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (ph[i]>h)
        {
            w+=2;
        }
        else
        w++;
        
    }

    printf("%d", w);
    
}