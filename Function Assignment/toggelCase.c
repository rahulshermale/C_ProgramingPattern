#include<stdio.h>

int main(){
char ch[40];
puts("Enter The string");
fgets(ch,sizeof(ch),stdin);

for (int i = 0; ch[i]!='\0'; i++)
{
    if (ch[i]>=65&&ch[i]<=90)
    {
        ch[i]+=32;
    }
    else if(ch[i]>=97&&ch[i]<=122)
    {
        ch[i]-=32;
    }
}
printf("%s",ch);
gets(ch);

}