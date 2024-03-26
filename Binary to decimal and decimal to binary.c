#include <stdio.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(long long n) {
    int decimalNumber = 0, i = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        n /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
    return decimalNumber;
}

// Function to convert decimal to binary
long long decimalToBinary(int n) {
    long long binaryNumber = 0;
    int remainder, i = 1;
    while (n != 0) {
        remainder = n % 2;
        n /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }
    return binaryNumber;
}

int main() {
    long long binary;
    int decimal;
    
    // Binary to Decimal
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    printf("Decimal number: %d\n", binaryToDecimal(binary));
    
    // Decimal to Binary
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("Binary number: %lld\n", decimalToBinary(decimal));
    
    return 0;
}
