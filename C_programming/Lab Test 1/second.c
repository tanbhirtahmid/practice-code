#include <stdio.h>

int main() {
    int n = 10;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = n-1; i > -1 ; i--) // start the array from last
    {
        if (arr[i]%5!=0) // check if the number is divisable by five or not
        {
            for (int j = i; j < n-1; j++) // move the number at the end of the array
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }

    for (int i = 0; i < n; i++) // print the array
    {
        printf("%d ", arr[i]);

    }
    
    

    return 0;
}