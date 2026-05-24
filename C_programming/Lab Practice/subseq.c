#include <stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    long long int org[n], sub[m];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &org[i]);
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%lld", &sub[i]);
    }
    
    int j = 0;

    for (int i = 0; i < m; i++)
    {
        int temp = 0;
        while (j < n)
        {
            if (sub[i]==org[j])
            {
                temp = j + 1;
                break;
            }
            j++;
            
        }

        if (j==n)
        {
            printf("NO");
            return 0;
        }

        j=temp;
        
    }
    
    printf("YES");
    
    
    return 0;
}