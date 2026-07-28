#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * input()
{
    char *str = NULL;

    int size = 1, len = 0;

    str = malloc(size * sizeof(char));
    
    char ch;

    while ((ch = getchar())!='\n')
    {
        if (size-1==len)
        {
            size++;
            str = realloc(str, size * sizeof(char));
        }
        
        str[len]=ch;
        len++;
    }

    str[len]=0;

    return str;
    
}

int main() {
    char *s=NULL;

    s = input();

    int i = 0, j = strlen(s)-1;

    while (i<j)
    {
        if (s[i]!=s[j])
        {
            printf("NO");
            exit(0);
        }
        i++; j--;
        
    }
    
    printf("YES");

    free(s);
    

    return 0;
}