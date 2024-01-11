#include "tp.c"
#include "first.c"

int num=200; //it's Global variable
int cnt;
int main(){

printf("In main Function\n");

disp();
printf("In main Function\t%d\n",num);
fun();
puts("After Function");
}