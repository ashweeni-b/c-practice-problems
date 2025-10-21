// Problem: Fibonacci Sequence using loops

/*
firstTerm = 0, secondTerm = 1
thirdTerm = firstTerm + secondTerm
*/

#include <stdio.h>

int main() {
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    int firstTerm = 0, secondTerm = 1, thirdTerm;

    printf("%d\t%d\t", firstTerm, secondTerm);

    for(int i = 3; i <= terms; i++) {
        thirdTerm = firstTerm + secondTerm;

        printf("%d\t", thirdTerm);

        firstTerm = secondTerm;
        secondTerm = thirdTerm;
    }

    printf("\n%dth term = %d", terms, thirdTerm);

    return 0;
}

/*
Input 1:
Enter the number of terms: 5

Output 1:
0       1       1       2       3
5th term = 3

Input 2:
Enter the number of terms: 8

Output 2:
0       1       1       2       3       5       8       13
8th term = 13
*/