#include <stdio.h>

int add()
{
    int n, m;
    scanf("%d%d", &n, &m);

    return n+m;
}

int main() {
    printf("%d", add());
    return 0;
}