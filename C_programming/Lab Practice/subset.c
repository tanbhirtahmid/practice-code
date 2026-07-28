#include <stdio.h>
#include <stdbool.h>

bool isSubset(int a[], int b[], int *n, int m)
{

    if(*n<m)
    {
        return 0;
    }
    bool check[5]={0};
    int i=0, j=0;
    while(i < m)
    {
        if(b[i]==a[j] && !(check[j]))
        {
            check[j]=1;
            i++;
            j=0;
        }
        else
        j++;
        
        if (j==*n-1 && b[i]!=a[j])
        {
            return 0;
        }
    }
    
    return 1;

}

int main ()
{
    int a[] = {10, 5, 2, 23, 19}, b[] = {19, 5, 3};

    int n, m;

    n = sizeof(a)/sizeof(a[0]);
    m = sizeof(b)/sizeof(b[0]);

    if (isSubset(a, b, &n, m))
    {
        printf("true");
    }
    else
    printf("false");
    
    return 0;

}