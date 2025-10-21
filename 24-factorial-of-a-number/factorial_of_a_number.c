// Problem: To calculate the factorial of a number

// Logic: 5! = 5 * 4 * 3 * 2 * 1 = 120

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int fact = 1;

    for(int i = num; i > 0; i--) {
        fact = fact * i;
    }

    printf("Factorial: %d\n", fact);

    return 0;
}

/*
Input 1:
Enter a number: 5

Output 1:
Factorial: 120

Input 2:
Enter a number: 9

Output 2:
Factorial: 362880

*/