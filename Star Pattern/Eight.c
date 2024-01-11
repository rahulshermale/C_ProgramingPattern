#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    int m=4;
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf(" ");

        }
        
        for (int k = 1; k <= m-i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}


/*

    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *


*/