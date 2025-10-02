// Program: Swapping two numbers using arithmetic operators

/* 
Logic:
a = a + b; 
b = a - b; 
a = a + b;
*/

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    printf("Numbers before swapping: %d %d\n", num1, num2);

    num1 = num1 + num2;    
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("Numbers after swapping: %d %d\n", num1, num2);

    return 0;
}

/*
Input 1:
3 5

Output 1:
Numbers before swapping: 3 5
Numbers after swapping: 5 3

Input 2:
2 4

Output 2:
Numbers before swapping: 2 4
Numbers after swapping: 4 2
*/