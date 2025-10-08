// Problem: To calculate the sum of the digits of a number

/*
Logic:
num = 123, sum = 0
digit = 123 % 10 = 3     num = 123 / 10 = 12      sum = sum + digit = 3
digit = 12 % 10 = 2      num = 12 / 10 = 1        sum = 5
digit = 1 % 10 = 1       num = 1 / 10 = 0         sum = 6
*/

#include <stdio.h>

int main() {
    int num;
    
    printf("Enter the number: ");
    scanf("%d", &num);

    int sum = 0, digit;

    for(int i = 0; num != 0; i++) {
        digit = num % 10;
        num = num / 10;
        sum += digit;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}

/*
Input 1: 
Enter the number: 123

Output 1:
Sum of digits = 6

Input 2:
Enter the number: 4332

Output 2:
Sum of digits = 12
*/