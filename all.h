
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is binary
int isBinary(long long number) {
    while (number > 0) {
        int digit = number % 10;
        if (digit != 0 && digit != 1) {
            // If the digit is not 0 or 1, it's not a binary number
            return 0;
        }
        number /= 10; // Move to the next digit
    }
    return 1; // All digits were 0 or 1, so it's a binary number
}

// Function to convert binary to decimal
int binaryToDecimal(long long binary) {
    int decimal = 0, i = 0, remainder;

    while (binary != 0) {
        remainder = binary % 10; // Get the last digit
        binary /= 10;            // Remove the last digit
        decimal += remainder * pow(2, i); // Convert to decimal
        ++i;
    }

    return decimal;
}
