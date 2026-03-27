#include <stdio.h>

void add(int a, int b){
    int c=a+b;
    printf("%d", c);
}

void sub(int a, int b){
    int c=a-b;
    printf("%d", c);
}

int main () {
    printf("20 + 10 = ");
    add(20,10);
    printf("\n20 - 10 = ");
    sub(20,10);
    return 0;
}