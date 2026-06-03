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
        if (str[len]=='\\')
        {
            str[len]=0;
        }
        
        len++;
    }

    str[len]=0;

    return str;
    
}

int main() {
    char *s=NULL;

    s = input();

    printf("%s", s);

    free(s);

    return 0;
}