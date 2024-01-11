#include <stdio.h>

void main()
{

void disp1();



puts("before disp1 Method");
disp1();
}

void disp1(){
    puts("Call disp1 Method");
    void disp2();
    disp2();
}

void disp2(){
    puts("Call disp2 Method");
}