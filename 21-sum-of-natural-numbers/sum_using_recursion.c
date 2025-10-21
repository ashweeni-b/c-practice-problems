// Problem: Sum of natural numbers using recursion

#include <stdio.h>

int numberSum(int n);

int main() {
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Sum = %d", numberSum(number));

    return 0;
}

int numberSum(int n) {
    if (n == 1) {
        return 1;
    }

    int sum = n + numberSum(n - 1);

    return sum;
}

/*
Input 1:
Enter number: 5

Output 1:
Sum = 15

Input 2:
Enter number: 10

Output 2:
Sum = 55
*/