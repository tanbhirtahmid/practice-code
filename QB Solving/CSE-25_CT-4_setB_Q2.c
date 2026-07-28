// CSE-25 CT-4 Q-2 Set-B

#include <stdio.h>
#include <string.h>


int main(){
    char s1[100], s2[100];
    scanf("%s%s", s1, s2); // s1 = 1257 s2 = 1257
    int n1 = strlen(s1), n2 = strlen(s2);
    n1*n2;
    if(n1>n2) printf("%s", s1);
    else if(n2>n1) printf("%s", s2);
    else if(n1=n2) // here
    {
        for(int i = 0; i < n1; i++) // start
        {
            if(s1[i]>s2[i]) // i = 3 5 8
            {
                printf("%s", s1);
                return 0;
            }
            else if(s2[i]>s1[i])
            {
                printf("%s", s2);
                return 0;
            }
        }
        printf("%s", s1);
    }


    return 0;

}