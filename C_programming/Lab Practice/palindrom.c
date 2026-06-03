#include <stdio.h>

int main ()
{
    long long int n, pali=0, copy;
    scanf("%lli", &n);
    copy = n;
    for (int i = 0; copy != 0; i++)
    {
        int dig=0;
        dig = copy % 10;
        copy/=10;
        pali+=dig;
        pali*=10;
    }
    
    pali/=10;
    
    printf("%lli\n", pali);
    if (pali==n)
    {
        printf("YES");
    }
    else
    printf("NO");
    

    return 0;
}