#include <stdio.h>

int main()
{
    int num2;
    puts("Enter Number");
    scanf("%d",&num2);

    void disp(int);

    for (int i = 0; i < num2; i++)
    {
        disp(i);
    }
    
}

void disp(int num)
{
    printf("The function Number Is %d\n",num);
}