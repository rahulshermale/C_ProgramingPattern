#include <stdio.h>

int main()
{

    void printStar(int, int);
    void printLower(int);
int n = 5;
int m = 5;
    for (int i = 1; i <= n; i++)
    {
        printStar(i, n);
        printf("\n");
    }
     for (int i = 1; i <= m; i++)
    {
        printLower(i);
        printf("\n");
    }
}

void printStar(int i, int n)
{

    for (int j = 1; i <= n; i++)
    {
        printf("* ");
    }
}

void printLower(int i){

    for (int j = 1; j <= i ; j++)
    {printf("* ");/* code */
    }
    

}/*

* * * * * 
* * * * 
* * *
* *
*
*
* *
* * *
* * * *
* * * * *



*/