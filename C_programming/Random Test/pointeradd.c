#include <stdio.h>

int main () {
    int a[]={1, 2 , 3 ,4};
    int *p=&a[0];
    // p=p-1;
    // printf("%d\n", *(p++));
    // printf("%d\n", *p);
    printf("%d\n", a[0]++);
    printf("%d\n", a[0]);
    return 0;
}