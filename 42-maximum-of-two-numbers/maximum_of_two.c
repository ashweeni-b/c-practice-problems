// Problem: Maximum of two numbers

// Logic: If a > b, max = a, else max = b

#include <stdio.h>

void maxOfTwo(int a, int b, int *max);

int main() {
    int num1, num2, max;

    printf("Enter numbers: ");
    scanf("%d %d", &num1, &num2);

    maxOfTwo(num1, num2, &max);

    printf("%d is the maximum number", max);

    return 0;
}

void maxOfTwo(int a, int b, int *max) {
    if(a > b) {
        *max = a;
    }
    else {
        *max = b;
    }
}

/*
Input 1:
Enter numbers: 2 4

Outpu 1:
4 is the maximum 

Input 2:
Enter numbers: 53 34

Output 2:
53 is the maximum number
*/