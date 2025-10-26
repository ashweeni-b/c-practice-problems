// Problem: Reversal of a number

/*
Logic:
Original number = 23452
original no. -> 2 * 10^4 + 3 * 10^ 3 + 4 * 10^ 2 + 5 * 10^1 + 2 * 10^0
no. of digits -> num % 10 == 0 -> digit++
reverse no. -> 2 * 10^4 + 5 * 10^3 + 4 * 10^2 + 3 * 10^1 + 2 * 10^0 
Reversed number = 25432
*/

#include <stdio.h>
#include <math.h>

int reverseNumber(int n);

int main() {
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Original number: %d\n", number);

    printf("Reverse number: %d", reverseNumber(number));

    return 0;
}

int reverseNumber(int n) {
    int digit = 0, temp = n, reverse = 0, power = 1;

    // Calculates the number of digits
    while(temp != 0) {
        digit++;
        temp = temp / 10;
    }

    for(int i = digit - 1; i >= 0, n != 0; i--) {
        int rem = n % 10;

        for(int j = 0; j < i; j++) {
            power = power * 10;
        }

        reverse = reverse + rem * power;
        n = n / 10;
        power = 1;
    }

    return reverse;
}