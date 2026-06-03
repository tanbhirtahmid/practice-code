#include <stdio.h>

int main() {
    char str1[100]="a8b2c6", str2[100]="a9t9";
    int len1=0, len2=0;
    for (int i = 0; str1[i]!=0 ; i++) // find the lenth of first string
    {
        len1++;
    }

    for (int i = 0; str2[i]!=0 ; i++) // find the lenth of second string
    {
        len2++;
    }
    
    int sum1=0, sum2=0;

    for (int i = 0; i < len1; i+=2) // sum of the vowels of first string
    {
        if (str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u' || str1[i]=='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O' || str1[i]=='U')
        {
            sum1+=str1[i+1]-'0';
        }
        
    }

    for (int i = 0; i < len2; i+=2) // sum of the vowels of second string
    {
        if (str2[i]=='a' || str2[i]=='e' || str2[i]=='i' || str2[i]=='o' || str2[i]=='u' || str2[i]=='A' || str2[i]=='E' || str2[i]=='I' || str2[i]=='O' || str2[i]=='U')
        {
            sum2+=str2[i+1]-'0';
        }
        
    }
    
    // check the string with maximum numbers of vowels
    if (sum1>sum2) 
    {
        printf("%s\n", str1);
    }
    else if (sum2>sum1)
    {
        printf("%s\n", str2);
    }
    // else if(sum1==sum2)
    // {
    //     printf("both\n");
    // }
    
    
    
    
    return 0;
}