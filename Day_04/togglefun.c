#include<stdio.h>
// void toggle(char*);rahul






void main()
{
	char str[30];
	void toggle(char*);
	puts("Enter ur name");
	gets(str);
	printf("Before  %s\n",str);
	toggle(str);
	//or
	toggle(&str[0]);
	printf("After %s\n",str);
}
void toggle(char *ptr)
{
	int i;
	for(i=0;ptr[i]!='\0';i++)
	{
		if(ptr[i]>=65 && ptr[i]<=90)
		{
			ptr[i]+=32;
		}
		else if(ptr[i]>=97 && ptr[i]<=122)
		{
			ptr[i]-=32;
		}	
	}
}		



