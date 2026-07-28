#include <stdio.h>
#include <stdlib.h>

long long int sum(int i, long long int *arr, int n)
{
    if (i<n-1)
    {
        return arr[i]+sum(i+1, arr, n);
    }
    else return arr[n-1];
    

}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    long long int arr[n];

    // sum = calloc(n, sizeof(long long));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    printf("%lld", sum(n-m, arr, n));

    return 0;
}