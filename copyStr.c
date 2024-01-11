#include<stdio.h>

int main()
{
char str1[20];
puts("Enter String One ");
gets(str1);
char str2[20];
puts("Enter String second ");
gets(str2);

int i,j;
for ( i = 0,j=0; str1[i]!='\0',str2[j]!='\0' ; i++,j++)
{
    //write here to if else and remove anothe r value
    
str1[i]=str2[j];

}


puts(str1);
}