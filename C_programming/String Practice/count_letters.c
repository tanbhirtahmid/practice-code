#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int compare(const void *a, const void *b) {
    char x = *(char *)a;
    char y = *(char *)b;

    return x - y;
}

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
    char * s = input();

    char * dis;

    int size = 1;

    dis = malloc(size * sizeof(char));

    dis[0]=s[0];

    // int n; 
    int k = 1;

    for (int i = 1; i < strlen(s); i++)
    {
        bool exists = 0;
        // n = sizeof(dis)/sizeof(disp[0]);
        for (int j = 0; j < size; j++)
        {
            if (s[i]==dis[j])
            {
                exists = 1;
                break;
            }
            
        }

        if (!exists)
        {
            size++;
            dis = realloc(dis, size * sizeof(char));
            dis[k]=s[i];
            k++;
        }
        
        
    }
    // int n = size;

    qsort(dis, size, sizeof(char), compare);

    int *ct = calloc(size, sizeof(int));

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < strlen(s); j++)
        {
            if (s[j]==dis[i])
            {
                ct[i]++;
            }
            
        }
        
    }

    for (int i = 0; i < size; i++)
    {
        printf("%c : %d\n", dis[i], ct[i]);
    }


    free(s);
    free(dis);
    free(ct);
    return 0;
}