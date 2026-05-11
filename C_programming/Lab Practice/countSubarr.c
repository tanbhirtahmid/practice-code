#include <stdio.h>

void code()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
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