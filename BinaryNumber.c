#include <stdio.h>

void decimalToBinary(int decimalNumber)
{
    int binaryNumber[32]; // Assuming a 32-bit binary representation
    int i = 0;

    // Convert decimal to binary
    while (decimalNumber > 0)
    {
        binaryNumber[i] = decimalNumber % 2;
        decimalNumber /= 2;
        i++;
    }

    // Print the binary representation in reverse order
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binaryNumber[j]);
    }
    printf("\n");
}

int main()
{
    int decimalNumber;

    // Input the decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Call the function to convert and print the binary representation
    decimalToBinary(decimalNumber);

    return 0;
}
