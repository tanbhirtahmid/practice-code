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
    char *s=NULL, *t=NULL;
    
    s = input();
    t = input();

    int n=strlen(s), m=strlen(t);

    printf("%d %d\n", n , m);
    printf("%s %s", s, t);

    free(s);
    free(t);

    return 0;
}