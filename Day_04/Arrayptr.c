#include <stdio.h>

int main()
{

    int arr[3];

    int i;
    puts("Enter Array Numberr");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
        // Or
        // scanf("%d",arr+i);
    }

    for (i = 0; i < 3; i++)
    {
        printf("%d\t", arr[i]);
        // OR
        printf("%d\t", *(arr + i));
    }
}