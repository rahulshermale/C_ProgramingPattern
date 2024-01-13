#include<stdio.h>


int main(){


int num1,num2,*ptr1,*ptr2;

puts("Enter @numbers");
scanf("%d%d",&num1,&num2);

puts("Create Pounters");

ptr1=&num1;
ptr2=&num2;

printf("%d second pointer %d",*ptr1,*ptr2);


}