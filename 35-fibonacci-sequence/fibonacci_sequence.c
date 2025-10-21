// Problem: Fibonacci Sequence

// Logic: fib(n) = fib(n - 2) + fib(n - 1)

#include <stdio.h>

int fibTerms(int terms);

int main() {
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    for(int i = 1; i <= terms; i++) {
        printf("%d\t", fibTerms(i));
    }

    return 0;
}

int fibTerms(int terms) {
    if (terms == 1) {
        return 0;
    } 
    else if (terms == 2) {
        return 1;
    }
    else {
        return fibTerms(terms - 2) + fibTerms(terms - 1);
    }
}

/*
Input 1:
Enter the number of terms: 5

Output 1:
0       1       1       2       3

Input 2:
Enter the number of terms: 8

Output 2:
0       1       1       2       3       5       8       13
*/