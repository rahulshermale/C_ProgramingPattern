#include<stdio.h>

int main(){

int n=7;

for (int i = 1; i <=n; i++)
{
    for (int j = 1; j <=i-1; j++)
    {
        printf(" ");
    }

    for (int k = 1; k <=n-i; k++)
    {
        
        printf("%c ",'A'+k-1);
    }
    
    printf("\n");
}




}



/*

A B C D E F 
 A B C D E
  A B C D
   A B C
    A B
     A

*/