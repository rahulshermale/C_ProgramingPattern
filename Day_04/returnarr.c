#include<stdio.h>

void main()
{
	int arr[4]={10,20,30,40};
	void disp(int*);

	disp(arr);
	//or
	//disp(&arr[0]);
}
void disp(int *ptr)
{
	int i=0;
	for(i=0;i<4;i++)
	{
		printf("%d\n",ptr[i]);
	}
	i=0;
	//or
	while(i<4)
	{
		printf("%d\n",*ptr++);
		i++;
	}
}
