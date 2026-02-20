#include <stdio.h>

int main(){
    int k, r, z=0, x;
    scanf("%d %d", &k, &r);

    if (k%5==0)
    {
        z=1;
    while ((10*z)%k!=0)
    {
        z++;
    }
    x=((10*z))/k;
    }
    else{
    while ((r+(10*z))%k!=0)
    {
        z++;
    }
    x=(r+(10*z))/k;
   } 

    
    printf("%d", x);
    
}