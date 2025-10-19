// Problem: Prime Number Check

/*
Logic:
divisor(prime number) -> 1 and the number itself

if number has 2 divisors in all then it is prime, else composite
*/

#include <stdio.h>

int main() {
    int number;

    printf("Enter the number: ");
    scanf("%d", &number);

    int divisor = 0;

    for(int i = 1; i <= number; i++) {
        if(number % i == 0) {
            divisor++;
        }
    }

    if(divisor == 2) {
        printf("%d is a prime number", number);
    } 
    else {
        printf("%d is a composite number", number);
    }
}

/*
Input 1:
Enter the number: 29

Output 1: 
29 is a prime number

Input 2:
Enter the number: 45

Output 2:
45 is a composite number
*/