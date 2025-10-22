// Problem: Greatest Common Divisor (GCD)

/*
Logic:
Divisors of 4 = 1, 2, 4
Divisors of 12 = 1, 2, 3, 4, 6, 12

GCD of 4 and 12 = 4
*/

#include <stdio.h>

int greatestCommonDivisor(int num1, int num2);

int main() {
    int num1, num2;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    printf("GCD = %d", greatestCommonDivisor(num1, num2));

    return 0;
}

int greatestCommonDivisor(int num1, int num2) {
    int gcd = 1, small;

    if(num1 > num2) {
        small = num2;
    }
    else {
        small = num1;
    }

    for(int i = 1; i <= small; i++) {
        if(num1 % i == 0 && num2 % i ==0) {
            gcd = i;
        }
    }

    return gcd;
}

/*
Input 1:
Enter num1: 12
Enter num2: 4

Output 1:
GCD = 4

Input 2:
Enter num1: 3
Enter num2: 9

Output 2:
GCD = 3
*/