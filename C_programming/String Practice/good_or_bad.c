#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

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

    bool good = 0;
    
    int k=0;
    
    for (int i = 0; i < n-2; i++)
    {
        if (s[i]=='1')
        {
            char str[] = "101";

            k = i;

            for (int j = 0; j < 3 && k < n; j++)
            {
                good = 1;
                if (s[k]!=str[j])
                {
                    good = 0;
                    break;
                }
                k++;
                
            }

            if (good)
            {
                printf("Good\n");
                free(s);
                return 0;
            }
            
            
        }
        else if (s[i]='0')
        {
            char str[] = "010";

            k = i;

            for (int j = 0; j < 3 && k < n; j++)
            {
                good = 1;
                if (s[k]!=str[j])
                {
                    good = 0;
                    break;
                }
                k++;
            }

            if (good)
            {
                printf("Good\n");
                free(s);
                return 0;
            }
        }
        
        
    }
    
    printf("Bad\n");
    free(s);

    return 0;
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