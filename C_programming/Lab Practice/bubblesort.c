#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[]={9, -18, 458, 73, 1723, 67, -222, -243, 304, -89, -398};
    // int arr[]={4, 6, 3, 5, 7, 2, 1};


    int n = sizeof(arr)/sizeof(arr[0]);

    while (0 < n)
    {
        int max = -10e5;
        int temp =0 ;    
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
                temp = i;
            }
            
        }

        for (int i = temp; i < n-1; i++)
        {
            int temp2 = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp2;
        }

        n--;
        
    }
    
    n = sizeof(arr)/sizeof(arr[0]);


    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    

    return 0;
}