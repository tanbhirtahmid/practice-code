#include <stdio.h>

int main () {
    int a[4];
    float avg=0;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
        avg+=a[i];
    }

    avg/=(float)4;

    if (avg>(int)avg)
    {
        printf("%d", (int)avg+1);
    }
    else
    printf("%d", (int)avg);

    return 0;

    
}