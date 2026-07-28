#include <stdio.h>
#include <string.h>
char * reverse(char *s)
{
    int l=0, r=strlen(s)-1;
    while (l<r)
    {
        char temp = s[l];
        s[l]=s[r];
        s[r]=temp;
        l++;
        r--;
    }
    
    
}

int main() {
    char str[]="Hello";
    reverse(str);
    printf("%s", str);
    return 0;
}