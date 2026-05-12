#include <stdio.h>

void code()
{
    char str[11];
    
    scanf("%s", str);
    int len=0;
    for (int i = 0; str[i] != 0 ; i++)
    {
        len++;
    }

    for (int i = len-1; i >= 0; i--)
    {
        printf("%c", str[i]);
        printf(" ");
    }
    
    printf("\n");
    
    

}

int main() {
    int t;
    scanf("%d", &t);

    while (t--)
    {
        code();
    }
    


    return 0;
}