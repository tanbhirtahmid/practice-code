#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[10]={0}; // array from zero to nine
    int copy = n;
    for (int i = 0; copy != 0; i++)
    {
        int temp = copy % 10; // last digit of n
        copy/=10; // removes the last digit of n
        arr[temp]++; // incrementing the array that has the digit
    }
    
    int maximum = arr[0]; // the maximum frequency of the number with maximum frequency
    int max_num = 0; // the number with maximum frequency

    for (int i = 0; i < 10; i++) // this loop checks the number with highest appearences
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
            max_num = i;
        }
        
    }

    printf("%d\n", max_num); // print the number with highest appearences
    

    return 0;
}