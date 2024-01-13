#include<stdio.h>

int main(){

    // printf("%d\n",'A');
    // printf("%d\n",'a');

    char ch[3];
ch[0]=10;
ch[1]=20;
ch[2]=30;
// printf("%d",ch[0]);


char arr[]={'a','b','c','\0'};


printf("%s",arr);
fgets(arr,sizeof(int),stdin);

printf("%s",arr);
for (int i = 0; arr[i]!='\0'; i++)
{
    // printf("%s",arr);
    
}

}