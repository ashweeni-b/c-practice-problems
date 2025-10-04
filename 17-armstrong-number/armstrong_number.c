// Problem: To determine whether the entered number is armstrong or not

/*
Logic: 
Armstrong number - Sum of its own digit each raised to the power of the number of digits.
E.g. 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 
*/

#include <stdio.h>

int main() {
    int num, temp, digit, no_of_digits, pow, exponent, sum;
    
    no_of_digits = sum = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    temp = num;

    // Count the digit
    while(temp != 0) {
        temp = temp / 10;
        no_of_digits++;
    }

    temp = num;

    // Sum of the digits
    while(temp != 0) {
        digit = temp % 10;

        exponent = no_of_digits;
        pow = 1;

        // Power of digits
        while(exponent != 0) {
            pow = pow * digit;
            exponent--;
        }
        
        sum = sum + pow;
        temp = temp / 10;
    }


    if (num == sum) {
        printf("Entered number is an armstrong number");
    }
    else {
        printf("Entered number is not an armstrong number");
    }
}

/*
Input 1: Enter the number: 153
Output 1: Entered number is an armstrong number

Input 2: Enter the number: 242
Output 2: Entered number is not an armstrong number
*/