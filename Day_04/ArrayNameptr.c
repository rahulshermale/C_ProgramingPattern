#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40};
    int *ptr;
    int i;
    
    ptr=arr;

    ptr=&arr[0];

    for ( i = 0; i <4; i++)
    {
        // printf("%d\t",arr[i]);
        // printf("%d\t",ptr[i]);
        // printf("%d\t",*(ptr+i));
        printf("%d\t",*(arr+i));
    }
    

}
