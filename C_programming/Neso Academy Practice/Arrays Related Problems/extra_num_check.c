// This program checks if user given number has repeated digits

#include <stdio.h>

int main () {
    int seen[10]={0}, i, rem;
    printf("Enter a number: ");
    scanf("%d", &i);
    while (i>0)
    {
        rem = i%10;
        if (seen[rem] == 1)
        {
            break;
        }
        seen[rem]+=1;
        i/=10;
        
    }

    if (i>0)
    {
        printf("YES");
    }
    else
    printf("NO");
    getchar();
    getchar();
    return 0;
}