#include <stdio.h>

void func(){
    static int x=23; // use of static variable
    x++;
    printf("%d ", x);
}

int main() {
    func(); func(); func(); 
    return 0;
}