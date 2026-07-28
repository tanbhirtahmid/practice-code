#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char s[] = "   I love Bangladesh   ";
    int n = strlen(s);
    int i =0 ;
    for (i = 0; i < n; i++)
    {
        if (isalnum(s[i]))
        {
            break;
        }
        
    }
    
    int k = n-1;
    for (k = n-1; k >= 0; k--)
    {
        if (isalnum(s[k]))
        {
            break;
        }
        
    }

    int c = 0;
    char s2[100];
    for (int j = i; j <= k; j++)
    {
        s2[c++]= s[j];
    }
    
    s2[c]=0;

    printf("%s\n", s2);
    
    
    return 0;
}