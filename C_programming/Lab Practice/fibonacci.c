#include <stdio.h>

// Recursive function to find the nth Fibonacci number
int fibonacci(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;

    return fibonacci(n-1)+fibonacci(n-2);
}

void series(int n) {
    // Base cases
    if (n == 0)
    {
        printf(" 0 ");
    } 
    if (n == 1)
    {
        series(--n);
        printf(" 1 ");
    } 
    else if(n > 1)
    {
        series(--n);
        printf(" %d ", fibonacci(n));
    }
}

int main() {
    int terms = 10; // Number of terms to print
    
    series(10);
    
    return 0;
}