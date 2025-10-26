// Problem: Reversal of a number - Approach 2

/*
Logic:
Original number = 23452
reverse = reverse * 10 + rem 
Reversed number = 25432
*/

#include <stdio.h>
#include <math.h>

int reverseNumber(int n);

int main() {
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Original number: %d\n", number);

    printf("Reverse number: %d", reverseNumber(number));

    return 0;
}

int reverseNumber(int n) {
    int reverse = 0, rem;

    while(n != 0) {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }
    return reverse;
}

/*
Input 1:
Enter number: 11432

Output 1:
Original number: 11432
Reverse number: 23411

Input 2:
Enter number: 5654

Output 2:
Original number: 5654
Reverse number: 4565
*/