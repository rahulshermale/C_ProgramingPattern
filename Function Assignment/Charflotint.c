#include <stdio.h>
//wrong
int main()
{

    void disp1(int,float,char);
    int num;
    char ch1;
    float fl;
    puts("Enter number");
    scanf("%d",&num);
    puts("Enter number");
    scanf(" %c",&ch1);
    puts("Enter number");
    scanf("%f",&fl);

disp1(num, fl,ch1);


}

void disp1(int num,float fl,char ch){



    printf("Numberis %d\n character is %c \nFloat number is %f\n",num,ch,fl);
}