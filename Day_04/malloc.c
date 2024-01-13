#include<stdio.h>
#include<malloc.h>
void main()
{
	int* ptr, i, rec;
	puts("How many nos");
	scanf("%d", &rec);
	ptr = (int*)calloc(rec, sizeof(int));
	printf("Enter %d values\n", rec);
	for (i = 0; i < rec; i++)
	{
		scanf_s("%d", &ptr[i],4);
	}
	puts("Displaying");
	for (i = 0; i < rec; i++)
	{
		printf("%d\n",ptr[i]);
	}
}