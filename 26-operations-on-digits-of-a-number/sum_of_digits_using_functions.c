// Problem: Sum of digits of number using function

// Logic: 123 = 1 + 2 + 3 = 6

#include <stdio.h>

int digitsSum(int number);

int main() {
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    printf("Sum of digits = %d", digitsSum(number));

    return 0;
}

int digitsSum(int number) {
    int digit, sum = 0;

    while(number != 0) {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }

    return sum;
}