#include <stdio.h>
#include <string.h>

int main () {
    int num[4], n, result=0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", num[i]);
    }

    string box;
    scanf("%s", box);
    n = strlen(box);

    for (int i = 0; i < n; i++)
    {
        if (box[i]=='1')
        {
            result+=num[0];
        }
        else if (box[i]=='2')
        {
            result+=num[1];
        }
        else if (box[i]=='3')
        {
            result+=num[2];
        }
        else
        {
            result+=num[3];
        }
        
        
    }

    printf("%d", result);
    
    
}