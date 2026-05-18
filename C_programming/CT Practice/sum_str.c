#include <stdio.h>
#include <string.h>

// Helper function to reverse a string in place
void reverse_string(char *str, int length) {
    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void add_string_numbers(const char *num1, const char *num2, char *result) {
    int i = strlen(num1) - 1; // Pointer for the end of num1
    int j = strlen(num2) - 1; // Pointer for the end of num2
    int k = 0;                // Pointer for the result string
    int carry = 0;

    // Loop from right to left until both strings and the carry are processed
    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;

        // Add digit from num1 if available
        if (i >= 0) {
            sum += (num1[i] - '0');
            i--;
        }

        // Add digit from num2 if available
        if (j >= 0) {
            sum += (num2[j] - '0');
            j--;
        }

        // Calculate the new carry (either 0 or 1)
        carry = sum / 10;

        // Convert the single digit back to a char and store it
        result[k] = (sum % 10) + '0';
        k++;
    }

    // Null-terminate the result string
    result[k] = '\0';

    // Since we added from right to left, the result is backwards. Reverse it!
    reverse_string(result, k);
}

int main() {
    // These numbers can be arbitrarily large (even 100+ digits long!)
    char num1[] = "340"; 
    char num2[] = "1200";
    
    // Allocate enough space for the result (max length of either string + 1 for carry + 1 for '\0')
    char result[50]; 

    add_string_numbers(num1, num2, result);

    printf("  %s\n+ %s\n---------------------\n= %s\n", num1, num2, result);

    return 0;
}