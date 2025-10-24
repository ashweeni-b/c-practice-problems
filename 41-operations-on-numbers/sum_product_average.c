// Problem: Sum, product and average of two numbers using functions

#include <stdio.h>

void sumProductAverage(int x, int y);

int main() {
    int num1, num2;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    sumProductAverage(num1, num2);

    return 0;
}

void sumProductAverage(int x, int y) {
    int sum = x + y;
    int product = x * y;

    float average = sum / 2.0;

    printf("Sum = %d", sum);
    printf("\nProduct = %d", product);
    printf("\nAverage = %.2f", average);
}

/*
Input 1:
Enter num1: 12
Enter num2: 3

Output 1:
Sum = 15
Product = 36
Average = 7.50

Input 2:
Enter num1: 9
Enter num2: 14

Output 2:
Sum = 23
Product = 126
Average = 11.50
*/