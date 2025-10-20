// Problem: Square of a number using library function

#include <stdio.h>
#include <math.h>

int main() {
    double number;

    printf("Enter number: ");
    scanf("%lf", &number);

    double square = pow(number, 2);

    printf("Square of %0.1lf = %0.1lf", number, square);

    return 0;
}

/*
Input 1:
Enter number: 2

Output 1:
Square of 2.0 = 4.0

Input 2:
Enter number: 4.5

Output 2:
Square of 4.5 = 20.3
*/