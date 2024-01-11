#include <stdio.h>

void printSpaces(int spaces) {
    for (int i = 0; i < spaces; i++) {
        printf(" ");
    }
}

void printStars(int stars) {
    for (int i = 0; i < stars; i++) {
        printf("* ");
    }
}

int main() {
    int n = 5;

    // Upper triangle
    for (int i = 1; i <= n; i++) {
        printSpaces(n - i);
        printStars(i);
        printf("\n");
    }

    // Lower triangle
    int m = 4;
    for (int i = 1; i <= m; i++) {
        printSpaces(i);
        printStars(m - i + 1);
        printf("\n");
    }

    return 0;
}
