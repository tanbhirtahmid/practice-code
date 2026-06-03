#include <stdio.h>
#include <stdbool.h>

bool odd_check(long long n)
{
    return (n%2!=0) ? 1 : 0;
}

bool bin_pali(long long n)
{
    bool *s;

    size = 1;

    s = malloc(size * sizeof(bool));

    for (int i = 0; n!=0; i++)
    {
        /* code */
    }
    
}

int main() {
    long long int n;
    scanf("%d", &n);

    bool odd, pali;
    
    odd = odd_check(n);
    pali = bin_pali(n);

    printf("%s" (odd && pali) ? "YES" : "NO");
    
    return 0;
}