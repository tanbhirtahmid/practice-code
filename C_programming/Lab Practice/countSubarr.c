#include <stdio.h>

void code()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    long long int count = n;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < count; j++)
        {
            if (arr[i]<=arr[j])
            {
                count++;
            }
            
        }
        
    }
    
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--)
    {
        code();
    }
    

    return 0;
}