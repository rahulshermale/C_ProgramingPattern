#include<stdio.h>

int main(){

int n=7;

for (int i = 1; i <=n-1; i++)
{
    for (int j = 1; j <=n-i; j++)
    {
        printf(" ");
    }

    for (int k = 1; k <i; k++)
    {
        
        printf("%c ",'A'+k-1);
    }
    
    printf("\n");
}
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

/*

     A
    A B
   A B C
  A B C D
 A B C D E
A B C D E F
 A B C D E
  A B C D
   A B C
    A B
     A
*/


}