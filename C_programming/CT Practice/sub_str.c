#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Helper to reverse a string in place
void reverse_string(char *str, int length) {
    int start = 0, end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++; end--;
    }
}

// Returns 1 if num1 > num2, -1 if num1 < num2, 0 if equal
int compare_strings(const char *num1, const char *num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    
    if (len1 > len2) return 1;
    if (len1 < len2) return -1;
    
    // If lengths are equal, lexicographical comparison works perfectly
    return strcmp(num1, num2);
}

// Core subtraction: Assumes num1 >= num2
void subtract_cores(const char *num1, const char *num2, char *result) {
    int i = strlen(num1) - 1;
    int j = strlen(num2) - 1;
    int k = 0;
    int borrow = 0;

    while (i >= 0) {
        int digit1 = num1[i] - '0';
        int digit2 = (j >= 0) ? (num2[j] - '0') : 0;
        
        int diff = digit1 - digit2 - borrow;

        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        result[k++] = diff + '0';
        i--;
        j--;
    }

    // Trim trailing zeros (which will be leading zeros after we reverse)
    while (k > 1 && result[k - 1] == '0') {
        k--;
    }

    result[k] = '\0';
    reverse_string(result, k);
}

// Wrapper function to handle negative results
void subtract_string_numbers(const char *num1, const char *num2, char *result) {
    int comp = compare_strings(num1, num2);

    if (comp == 0) {
        strcpy(result, "0");
        return;
    }

    if (comp > 0) {
        // num1 is larger, result is positive
        subtract_cores(num1, num2, result);
    } else {
        // num2 is larger, result is negative
        result[0] = '-';
        subtract_cores(num2, num1, result + 1); // Pass result+1 to skip writing over the '-'
    }
}

int main() {
    // Works flawlessly with massive numbers that overflow standard C data types
    char num1[] = "100000000000000000000"; 
    char num2[] = "1";
    char result[105]; 

    subtract_string_numbers(num1, num2, result);
    printf("%s - %s = %s\n", num1, num2, result);

    // Testing a negative result scenario
    char num3[] = "45";
    char num4[] = "100";
    char result2[105];

    subtract_string_numbers(num3, num4, result2);
    printf("%s - %s = %s\n", num3, num4, result2);

    return 0;
}