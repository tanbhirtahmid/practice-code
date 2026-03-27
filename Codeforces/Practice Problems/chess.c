#include <stdio.h>

int main () {
    int n, A=0, D=0;
    scanf("%d", &n);
    char win[n];
    scanf("%s", win);
    for (int i = 0; i < n; i++)
    {
        if (win[i]=='A')
        {
            A++;
        }
        else if (win[i]=='D')
        {
            D++;
        }
    }
    if (A>D)
    {
        printf("Anton");
    }
    else if (D>A)
    {
        printf("Danik");
    }
    else if (A==D)
    {
        printf("Friendship");
    }
    return 0;
}