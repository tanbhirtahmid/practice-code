#include <stdio.h>
#include <math.h>
int main ()
{
    int arr[]={100, 3, 4, 3, 5, 9, 11, 75};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0, j=n-1;
    int mid=j/2;
    while(i<mid)
    {
        int a, b;
        a=arr[i];
        b=arr[j];

        arr[i]=b;
        arr[j]=a;

        i++;
        j--;
    }

    for (int k = 0; k < n; k++)
    {
        printf(" %d ", arr[k]);
    }

    return 0;
    
}