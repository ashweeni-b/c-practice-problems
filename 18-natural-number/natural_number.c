// Problem: To check if the number is a natural number

// Logic: Number greater than 1 is a natural number

#include <stdio.h>

int main() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num >= 1) {
        printf("Entered number is a natural number");
    }
    else {
        printf("Entered number is not a natural number");
    }

    return 0;
}

/*
Input 1: 
Enter the number: 43

Output 1: 
Entered number is a natural number

Input 2:
Enter the number: -8

Output 2:
Entered number is not a natural number
*/