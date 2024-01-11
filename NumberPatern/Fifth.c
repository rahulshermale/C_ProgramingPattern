#include<stdio.h>

int main()
{

    int n=5;

    // int num=/5;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <=i; j++)
    {
        printf("%d",j);
    }
    printf("\n");
}

for (int i = 1; i <=n; i++)
{
    for (int j = 1; j <= n-i; j++)
    {
       
       printf("%d",j);
    }
    printf("\n");
}




}




/*

1
12
123
1234
12345
1234
123
12
1

*/