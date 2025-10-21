// Problem: Factorial using recursion

#include <stdio.h>

int factorial(int n);

int main() {
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Factorial = %d", factorial(number));

    return 0;
}

int factorial(int n) {
    if(n == 1) {
        return 1;
    }

    int fact = n * factorial(n - 1);

    return fact;
}

/*
Input 1:
Enter number: 5

Output 1:
Factorial = 120

Input 2:
Enter number: 6

Output 2:
Factorial = 720
*/