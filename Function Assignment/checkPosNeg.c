#include<stdio.h>

int main()
{
void ch();
int num;
puts("Enter A number ");
scanf("%d",&num);

ch(num);

}

void ch(int num){

if (num==0)
{
    puts("Zero");
}
else if (num<0)
{
    puts("Negative");
}
else {
puts("positive");

}

}