#include<stdio.h>

int main()

{
    int num=5;
for (int i = 1; i <= num; i++)
{
    for (int j = 1; j <=i; j++)
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


*/