#include <stdio.h>

int * fun()
{
    static int arr[]={2, 3, 4};
    return arr;
}

int main() {
    int *p = fun();
    int n = sizeof(p)/sizeof(p[0]);
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", p[i]);
    }
    
    return 0;
}