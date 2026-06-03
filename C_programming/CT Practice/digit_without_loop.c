// Write a program to determine the number of digits in an integer number without using loops.
#include <stdio.h>

int size(int a)
{
    static int count;
    count++;
    if (a/10==0)
    {
        return count;
    }
    else
    {
        return size(a/10);
    }
}

int main()
{
    int a;

    scanf("%d", &a);

    printf("%d", size(a));

    return 0;
}