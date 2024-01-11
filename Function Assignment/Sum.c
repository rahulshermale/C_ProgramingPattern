// 1) write a function , which will take 2 numbers and return their sum.

#include<stdio.h>


int main(){

int sum(int ,int);

int num1,num2;
puts("Enter The nUmber");
scanf("%d%d",&num1,&num2);

int result=sum(num1,num2);
printf("Thi sum Of two number is : %d",result);

}

int sum(int n1,int n2){
puts("Heelloo");
   int res=n1+n2;
   return  res;
}