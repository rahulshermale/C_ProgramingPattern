#include <stdio.h>
#include <conio.h>
int main()
{

    void add();
    void modify();
    void delete();

    puts("Enter Character");
    char ch;
    // scanf("%c", &ch);
ch=getch();

/*
if (ch[0]=='a'||ch[0]=='A')
{
   add();
}
else if (ch[0]=='m'||ch[0]=='A')
{
   modify();
}
else if (ch[0]=='d'||ch[0]=='D')
{
   delete();
}
else
printf("Default character");
*/


 switch (ch)
    {
    case 'a':
    case 'A':
        add();
        break;

    case 'm':
    case 'M':
       modify();
        break;

    case 'd':
    case 'D':
         delete();
        break;
    default:
    printf("Default character");
        break;
    }
}
void add(){
    puts("Add Function call ");
}
void modify(){
    puts("modify Function call ");
}

void delete(){
    puts("delete Function call ");
}
