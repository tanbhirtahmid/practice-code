#include <stdio.h>

void code()
{
    int n;
    scanf("%d", &n);

    long int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%ld", &arr[i]);
    }
    long int mini=10e7;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            long int temp = arr[i] + arr[j] + j - i;
            if (temp < mini)
            {
                mini = temp;
            }
        }
        
    }

    printf("%d\n", mini);
    
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