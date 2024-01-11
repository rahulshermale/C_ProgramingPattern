#include <stdio.h>
int main()
{

    void disp1();

    disp1();
    return 0;
}

void disp1()
{
    int num;
    char ch1;
    float fl;
    puts("Enter number");
    scanf("%d", &num);
    puts("Enter character");
    scanf(" %c", &ch1);
    puts("Enter float number");
    scanf("%f", &fl);

    printf("Numberis %d\ncharacter is %c\nFloat number is %f\n", num, ch1, fl);
}