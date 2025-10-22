// Problem: Power Function

#include <stdio.h>

int power(int base, int exponent);

int main() {
    int base, exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    printf("%d raised to %d = %d", base, exponent, power(base, exponent));

    return 0;
}

int power(int base, int exponent) {
    int power = 1;
    for(int i = 1; i <= exponent; i++) {
        power = power * base;
    }

    return power;
}

/*
Input 1:
Enter base: 5
Enter exponent: 3

Output 1:
5 raised to 3 = 125

Input 2:
Enter base: 2
Enter exponent: 5

Output 2:
2 raised to 5 = 32
*/