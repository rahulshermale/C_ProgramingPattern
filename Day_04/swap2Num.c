#include<stdio.h>

int main(){
int n1=10;
int n2=20;

int *ptr1=&n1;
int *ptr2=&n2;

printf("Before swap %d \t %d\n",*ptr1,*ptr2);

int temp=*ptr1;
*ptr1=*ptr2;

*ptr2=temp;
printf("After swap %d \t %d",*ptr1,*ptr2);
}