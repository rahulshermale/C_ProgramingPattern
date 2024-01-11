#include<stdio.h>

int main()
{

    int n=5;
for (int i = 0; i <=n; i++)
{
    for (int j = 1; j <= n-i; j++)
    {
       
       printf("%d",j);
    }
    printf("\n");
}




}


/*

12345
1234
123
12
1

*/