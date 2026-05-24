#include <stdio.h>
#define SQUARE(x) x * x
#define MULTIPLY(a, b) a * b
#define RESULT MULTIPLY(2+3, 4+5)


int main() {
    int a = 5;
    printf("sq=%d", SQUARE(a + 1));
    printf("\nres=%d", RESULT);
    return 0;
}