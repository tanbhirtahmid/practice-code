#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * input()
{
    char *str = NULL;

    int size = 1, len = 0;

    str = malloc(size * sizeof(char));
    
    char ch;

    while ((ch = getchar()) != ' ' && ch != '\n')
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
    if (freopen("/home/sf/Documents/Programing/KU CSE/Input files/input.md", "r", stdin) == NULL)
    {
        printf("File open failed\n");
        exit(1);
    }
}

void code() 
{
    char *s= NULL, *t = NULL;

    s = input();
    t = input();

    // char *ans = NULL;

    int size1 = strlen(s), size2 = strlen(t);
    
    int i=0, j=0, k=0, last = 0;
    
    // int size = 1;
    
    // ans = malloc(size * sizeof(char));
    
    
    char ans[size1+size2+1];

    while(j < size1 || k < size2)
    {
        if (j < size1)
        {
            ans[i]=s[j];
            i++;
            j++;
        }

        if (k < size2)
        {
            ans[i]=t[k];
            i++;
            k++;
        }

    }

    ans[size1+size2] = 0;

    printf("%s\n", ans);

    free(s);
    free(t);
    
}

int main() {
    // fastIO();
    // openfile();
    int t;
    scanf("%d", &t);
    getchar();
    
    while (t!=0) {
        code();
        t--;
    }

    return 0;
}