// Program: To check the smallest of the two numbers and print it.

// Logic: If num1 < num2, output 1, else 0.

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("%d", num1 < num2);

    return 0;
}

/*
Input:
Enter numbers: 3 5

Output:
1

Input: 
Enter numbers: 3 1

Output: 0
*/