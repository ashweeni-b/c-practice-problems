// Problem: Swapping of two numbers using function call

#include <stdio.h>

int swap(int *a, int *b);

int main() {
    int num1, num2;
    
    scanf("%d %d", &num1, &num2);

    printf("Numbers before swapping: %d %d\n", num1, num2);

    swap(&num1, &num2);

    printf("Numbers after swapping: %d %d", num1, num2);
    
}

int swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
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