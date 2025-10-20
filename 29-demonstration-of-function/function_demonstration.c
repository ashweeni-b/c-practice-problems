// Problem: Demonstration of Function

#include <stdio.h>

void printHello();
void printGoodbye();
int sum(int a, int b);

int main() {
    printHello();
    printGoodbye();

    printf("Sum of 5 and 4 is: %d", sum(5, 4));

    return 0;
}

void printHello() {
    printf("Hello\n");
}

void printGoodbye() {
    printf("Goodbye\n");
}

int sum(int a, int b) {
    return a + b;
}
/*
Output:
Hello
Goodbye
*/