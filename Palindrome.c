#include <stdio.h>

// Function to check if a number is palindrome
int is_palindrome(int n) {
    int original = n, reversed = 0, remainder;

    // Reverse the number
    while (n != 0) {
        remainder = n % 10;         // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        n /= 10;                    // Remove the last digit from n
    }

    // Check if the original number is equal to its reverse
    if (original == reversed)
        return 1;  // Return 1 for palindrome
    else
        return 0;  // Return 0 for not a palindrome
}

int main() {
    int N;
    
    // Read the input number
    scanf("%d", &N);

    // Check if the number is a palindrome and print the result
    if (is_palindrome(N)) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}