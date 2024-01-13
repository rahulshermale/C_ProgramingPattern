#include<stdio.h>
void main()
{
    int i;
char str[]="helloworld";
char *ptr=str;
//or
char *ptr=&str[0];

for(i=0;str[i]!='\0';i++)
{
	printf("%c\n",str[i]);
}

for(i=0;ptr[i]!='\0';i++)
{
	printf("%c\n",ptr[i]);
}

puts(str);
puts(ptr);

// str++;
ptr++;

puts(ptr);
puts(str);
ptr--;

while(*ptr)
{
	printf("%c\n",*ptr++);
}

ptr=str;

printf("%c\n",*ptr);

printf("%c\n",*ptr++);

printf("%c\n",*ptr);

printf("%c\n",++*ptr);

printf("%c\n",*ptr);

printf("%c\n",(*ptr)++);

puts(str);

puts(ptr);
}