#include<stdio.h>
#include<malloc.h>
void main()
{
	int* ptr, i, rec, morerec = 0;
	char ans;
	puts("How many nos");
	scanf("%d", &rec);
	ptr = (int*)calloc(rec, sizeof(int));
	printf("Enter %d values\n", rec);
	for (i = 0; i < rec; i++)
	{
		scanf("%d", &ptr[i]);
	}
	puts("Displaying");
	for (i = 0; i < rec; i++)
	{
		printf("%d\n", ptr[i]);
	}
	puts("Do u wish to continue ?");
	getchar();
	scanf("%c", &ans,1);
	if (ans == 'y' || ans == 'Y')
	{
		puts("how many more ?");
		scanf("%d", &morerec);
		ptr = (int*)realloc(ptr, (rec + morerec) * sizeof(int));
		printf("Enter %d more numbers", morerec);
		for (i = rec; i < (rec + morerec); i++)
		{
			scanf("%d", &ptr[i]);
		}
	}
	puts("Displaying All");
	for (i = 0; i < (rec + morerec); i++)
	{
		printf("%d\n",ptr[i]);
	}
}