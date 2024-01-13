#include<stdio.h>
void main()
{
	int sqr(int);
	int num=5,res;
	int (*ptr)(int);
	ptr=sqr;

	res=sqr(num);
	// or
    	// printf("%d\n",res);
	res=ptr(num);
	// or
    	// printf("%d\n",res);
	res=(*ptr)(num);

	// printf("%d\n",res);
}
int sqr(int k)
{
    printf("%d\n", k*k);
	return k*k;
}