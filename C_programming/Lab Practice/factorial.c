#include <stdio.h>


int main ()
{
    int t;
    scanf("%d", &t);
    int arr[t];

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < t; i++)
    {
        long long int multi=1;
        for (int j = 1; j <= arr[i]; j++)
        {
            multi*=j;
        }
        printf("%lli\n", multi);
        
    }
    
    
    

    return 0;
}