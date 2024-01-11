#include<stdio.h>

int main()
{
char str1[20];
puts("Enter String One ");
gets(str1);
char str2[20];
puts("Enter String second ");
gets(str2);

// printf("%s",&str1);
// printf("\n");
// printf("%s",&str1);

int result=strcmp(str1,str2);

puts((result)?"false":"true");

}