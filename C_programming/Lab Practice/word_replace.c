#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void replace1(char * str, char * word, char * rep, int last)
{
    int len = strlen(str), len1 = strlen(word), len2 = strlen(rep);

    int diff = len2-len1;

    for (int i = len-1; i > last+len1-1; i--)
    {
        str[i+diff]=str[i];
    }
    int j = 0;
    for (int i = last; j < len2; i++)
    {
        str[i]=rep[j];
        j++;
    }
    
}

void replace2(char * str, char * word, char * rep, int last)
{
    int len = strlen(str), len1 = strlen(word), len2 = strlen(rep);

    int diff = len1-len2;

    for (int i = last+len2; i < len; i++)
    {
        str[i-diff]=str[i];
    }
    int j = 0;
    for (int i = last; j < len2; i++)
    {
        str[i]=rep[j];
        j++;
    }
    str[len - len1 + len2]=0;
}

void find_replace(char * str, char * word, char * rep)
{
    int len = strlen(str), len1 = strlen(word), len2 = strlen(rep);
    for (int i = 0; i < len; i++)
    {
        bool found = 1;
        if (str[i]==word[0])
        {
            int k = 0;
            for (int j = i; k < len1; j++)
            {
                if (word[k]!=str[j])
                {
                   found = 0;
                   break;
                }
                k++;
            }
            if (found)
            {
                if (len1 <= len2)
                {
                    replace1(str, word, rep, i);
                }
                else replace2(str, word, rep, i);
                
                len = len - len1 + len2;
                
                i = i + len2;
            }
            
        }
        
        
    }
    

}

int main() {
    char str[100]="test1    tst3    //    tst2    test2 tst5";
    // char rep[]="test";

    find_replace(str, "tst", "ts");

    printf("%s", str);

    return 0;
}