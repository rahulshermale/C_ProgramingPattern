#include <stdio.h>
int main() {
    int x = 10;
    int *p = &x;
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n",p);
    printf("Value at the address stored in p: %d\n", *p);
    return 0;
}