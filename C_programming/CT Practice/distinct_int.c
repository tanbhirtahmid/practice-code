// Write a program to take four integers. Your program will then determine how many distinct integers are there.
#include <stdio.h>

int main ()
{
    int a[4];

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int count[4]={0};
    int total=4;
    int thrice=0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (a[i]==a[j])
            {
                count[i]++;
            }
            
        }
        if(count[i]==3)
        {

            total=2;
            break;
        }
        else if(count[i]==4)
        {
            total=1;
            break;
        }
        else if(count[i]==2)
        {
            thrice++;
            if(thrice==3)
            {
                total=2;
                break;
            }
            else if(i==3)
            {
                total=3;
                break;
            }
        }
    }
    
    
    printf("%d", total);
    
    
    return 0;    
}