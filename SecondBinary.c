#include <stdio.h>

void binaryNumber(int num)
{

    int binNumbe[32];
    int i = 0;

    while (num > 0)
    {
        binNumbe[i] = num % 2;
        num /= 2;
        i++;
    }
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binNumbe[j]);
    }
     printf("\n");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binNumbe[j]);
    }
    printf("\n");
}

int main()
{

    puts("Enter A Number ");
    int number;
    scanf("%d", &number);

    binaryNumber(number);
}