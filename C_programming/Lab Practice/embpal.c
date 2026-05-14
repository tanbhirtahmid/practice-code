#include <stdio.h>

int main() {
    char str[]="1273456965488797";
    int len=0;
    for (int i = 0; str[i]!=0; i++)
    {
        len++;
    }
    
    int i=0, j=len-1;

    while (i<len && j>=0)
    {
        if (j<i)
        {
            break;
        }
        
        if (str[i]==str[j])
        {
            i++;
            j--;
        }
        else j--;

        if (str[i]==str[j])
        {
            i++;
            j--;
        }
        else i++;
        
    }

    if (j-i==0)
    {
        printf("Yes");
    }
    else printf("No");
    
    
    return 0;
}