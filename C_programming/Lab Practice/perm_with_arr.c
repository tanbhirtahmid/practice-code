#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    long long int arr1[n], arr2[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr1[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr2[i]);
    }

    bool checked[n];

    for (int i = 0; i < n; i++)
    {
        checked[i]=0;
    }

    // int j = 0;

    for (int i = 0; i < n; i++)
    {
        // int temp = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr1[i]==arr2[j] && !checked[j])
            {
                checked[j]=1;
                // temp = j;
                break;
            }
            
        }
        
        
    }

    for (int i = 0; i < n; i++)
    {
        if (!checked[i])
        {
            printf("no");
            return 0;
        }
    }
    

    printf("yes");

    return 0;
}