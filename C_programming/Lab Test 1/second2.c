#include <stdio.h>

int main() {
    int n = 10;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int k = n;

    for (int i = n-1; i > -1 ; i--)
    {
        if (arr[i]%5!=0)
        {
            int temp = arr[k-1];
            for (int j = k-2; j >= i; j++)
            {
                arr[j+1] = arr[j];
            }
            k--;
            
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);

    }
    
    return 0;
}