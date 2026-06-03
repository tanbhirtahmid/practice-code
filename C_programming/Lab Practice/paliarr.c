#include <stdio.h>

int main() {
    long long int n;
    scanf("%lld", &n);
    long long int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    int j=n-1;
    n/=2;
    

    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=arr[j])
        {
            printf("NO");
            return 0;
        }
        j--;
    }

    printf("YES");
    
    
    return 0;
}