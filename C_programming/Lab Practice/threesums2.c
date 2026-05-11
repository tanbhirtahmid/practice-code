#include <stdio.h>

int main() {
    int k, s, count = 0;
    scanf("%d%d", &k, &s);
    int n;
    if (s<=k)
    {
        n=s;
    }
    
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            for (int l = 0; l <= j; l++)
            {
                if (i+j+l==s)
                {
                    count++;
                }
                
            }
            
        }
        
    }

    printf("%d", 3*count + 3);
    
    return 0;
}