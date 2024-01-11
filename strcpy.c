#include<stdio.h>

int main()
{
char str1[20];
puts("Enter String One ");
gets(str1);
char str2[20];
puts("Enter String second ");
gets(str2);

strcpy(str1,str2);

printf(strcpy(str1,str2));
printf("\n");
// printf("%s",&str1);

}