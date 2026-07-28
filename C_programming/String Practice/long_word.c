#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * input()
{
    char *str = NULL;

    int size = 1, len = 0;

    str = malloc(size * sizeof(char));
    
    char ch;

    while (scanf("%c", &ch) && ch!='\n')
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

void openfile()
{
    freopen("/home/sf/Documents/Programing/KU CSE/Input files/input.md", "r", stdin);
}

int code() 
{
    char *s;

    s = input();
    
    int n = strlen(s);

    if (n<=10)
    {
        printf("%s\n", s);
        free(s);
        return 0;
    }

    printf("%c%d%c\n", s[0], n-2, s[n-1]);
    
    free(s);

    return 0;
}

int main() {
    // fastIO();
    openfile();
    int t;
    scanf("%d", &t);
    getchar();
    
    while (t!=0) {
        code();
        t--;
    }

    return 0;
}