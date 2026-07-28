#include <stdio.h>
#include <string.h>


int main(){
    char s[100];
    scanf("%s", s); // input : 2.587
    int n = strlen(s);
    
    int count = 0;	
    
    for(int i=0; i < n; i++) 
    {
        if(!(('0' <= s[i] && s[i] <='9') || s[i]=='.'))
        {
            printf("No");
            return 0;
        }
        if(s[i]=='.') count++;
    }

    if(count!=1)
    {
        printf("No");
    }
    else printf("Yes");

    return 0;
}