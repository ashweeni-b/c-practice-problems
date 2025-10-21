// Problem: nth term of fibonacci sequence

// Logic: fib(n) = fib(n - 1) + fib(n - 2)

#include <stdio.h>

int nthTerm(int terms);

int main() {
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("%dth term = %d", terms, nthTerm(terms));

    return 0;
}

int nthTerm(int terms) {
    if(terms == 1) {
        return 0;
    }
    else if(terms == 2) {
        return 1;
    }
    else {
        return nthTerm(terms - 1) + nthTerm(terms - 2);
    }
}

/*
Input 1:
Enter the number of terms: 5

Output 1:
8th term = 3

Input 2:
Enter the number of terms: 8

Output 2:
10th term = 13
*/