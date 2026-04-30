#include <stdio.h>

int main () {
    const int i=30;
    // const int i=78;
    const int *p=&i;
    printf("%p\n", p);
}