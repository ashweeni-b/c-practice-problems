// Problem: Square root of perfect squares

/*
Logic:
Number = 9

9 - 1 = 8   count = 1
8 - 3 = 5   count = 2
5 - 5 = 0   count = 3

Since, zero is encountered, square root of 9 is 3.
*/

#include <stdio.h>

int squareRoot(int number);

int main() {
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Square root = %d", squareRoot(number));

    return 0;
}

int squareRoot(int number) {
    int count = 0;

    for(int i = 1; number != 0; i += 2) {
        number = number - i;
        count++;
    }

    return count;
}

/*
Input 1:
Enter number: 4

Output 1:
Square root = 2

Input 2:
Enter number: 9

Output 2:
Square root = 3
*/