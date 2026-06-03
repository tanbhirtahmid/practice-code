#include <stdio.h>

int main() {
    int a[4];
    int sum = 0;

    for (int i = 0; i < 4; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("%s", (sum % 4 == 0) ? "YES" : "NO");

    return 0;
}
