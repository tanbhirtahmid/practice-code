#include <stdio.h>
#include <stdbool.h>

int min(int arr[], bool used[], int n)
{
    int mini = 101;
    int temp = 0 ;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini && !used[i])
        {
            mini = arr[i];
            temp = i;
        }
        
    }
    used[temp]=1;
    return mini;

}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr+i);
    }
    bool used[n];

    for (int i = 0; i < n; i++)
    {
        used[i]=0;
    }
    

    int ans[n];
    for (int i = 0; i < n; i++)
    {
        ans[i] = min (arr, used, n);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ans[i]);
    }
    
    


    
    return 0;
}