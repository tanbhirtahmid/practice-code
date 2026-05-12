#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[]={9, -18, 458, 73, 1723, 67, -222, -243, 304, -89, -398};

    int n = sizeof(arr)/sizeof(arr[0]);
    int limit=0;
    // moving the negative odd
    for (int i = 0; i < n; i++)
    {
        int index = n-1-i;
        if (arr[index]%2!=0 && arr[index]==-abs(arr[index]))
        {
            for (int j = index; j < n-1; j++)
            {
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
            
        }
        
    }

    // moving the negative even
    for (int i = 0; i < n; i++)
    {
        int index = n-1-i;
        if (arr[index]%2==0 && arr[index]==-abs(arr[index]))
        {
            for (int j = index; j < n-1; j++)
            {
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
            
        }
        
    }

    // moving the positive even
    for (int i = 0; i < n; i++)
    {
        int index = n-1-i;
        if (arr[index]%2==0 && arr[index]==abs(arr[index]))
        {
            for (int j = index; j < n-1; j++)
            {
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
            
        }
        
    }

    // moving the positive odd
    for (int i = 0; i < n; i++)
    {
        int index = n-1-i;
        if (arr[index]%2!=0 && arr[index]==abs(arr[index]))
        {
            for (int j = index; j < n-1; j++)
            {
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    

    return 0;
}