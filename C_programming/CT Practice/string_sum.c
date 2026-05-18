#include <stdio.h>
#include <string.h>

int main() {
    char str1[]="11", str2[]="12";

    int carry=0;

    int len1=strlen(str1), len2=strlen(str2);

    int n = (len1>len2) ? len1 : len2;

    for (int i = 0; i < n; i++)
    {
        int index1 = len1-1-i;
        int index2 = len2-1-i;
        if (i > len2-1)
        {
            if (carry==0)
            {
                break;
            }
            else
            {
                int temp = str1[index1] + carry - '0';
                str1[index1]= (temp % 10) + '0';
                if (temp >= 10)
                {
                    carry = temp/10; 
                }
        
            }
            
        }
        

        int temp = str1[index1] + str2[index2] + carry - 2*'0';
        str1[index1]= (temp % 10) + '0';
        carry = 0;
        if (temp >= 10)
        {
            carry = temp/10; 
        }
        
    }

    if (carry>0)
    {
        printf("%d", carry);
    }
    printf("%s", str1);
    
    

    return 0;
}