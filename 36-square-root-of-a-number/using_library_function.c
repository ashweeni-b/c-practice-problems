// Problem: Square root of a number

// Logic: Using sqrt() library function

#include <stdio.h>
#include <math.h>

double squareRoot(double number);

int main() {
    double number;

    printf("Enter number: ");
    scanf("%lf", &number);

    printf("Square root = %lf", squareRoot(number));

    return 0;
}

double squareRoot(double number) {
    return sqrt(number);
}

/*
Input 1:
Enter number: 8

Output 1:
Square root = 2.828427

Input 2:
Enter number: 5

Output 2:
Square root = 2.236068
*/