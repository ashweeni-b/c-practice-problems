// Problem: To check the maximum among the three numbers

/*
Logic: 
If a > b, 
    if a > c
        a is greater
    else 
        c is greater
else
    if b > c
        b is greater
    else
        c is greater
*/

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2) {
        if (num1 > num3) {
            printf("%d is the maximum number", num1);
        }
        else {
            printf("%d is the maximum number", num3);
        }
    }
    else {
        if (num2 > num3) {
            printf("%d is the maximum number", num2);
        }
        else {
            printf("%d is the maximum number", num3);
        }
    }

    return 0;
}

/*
Input 1:
Enter numbers: 2 3 4

Output 1:
4 is the maximum number

Input 2:
Enter numbers: 32 43 53

Output 2:
53 is the maximum number
*/