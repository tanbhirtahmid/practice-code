#include <stdio.h>

int main() {
    int k, s, count = 0;
    scanf("%d%d", &k, &s);
    int n;
    if (s<=k)
    {
        n=s;
    }
    else n=k;
    
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            int test = s-i-j; 
            if (test<=k && 0<=test)
            {
                count++;
            }
            
        }
        
    }

    printf("%d", count);
    
    return 0;
}