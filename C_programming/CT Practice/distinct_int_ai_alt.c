#include <stdio.h>

int main () 
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int distinct = 1; // 'a' is the 1st distinct number

    // Is 'b' new? (Only compare to 'a')
    if (b != a) distinct++;

    // Is 'c' new? (Compare to 'a' AND 'b')
    if (c != a && c != b) distinct++;

    // Is 'd' new? (Compare to 'a', 'b', AND 'c')
    if (d != a && d != b && d != c) distinct++;

    printf("%d", distinct);
    
    return 0;
    
}