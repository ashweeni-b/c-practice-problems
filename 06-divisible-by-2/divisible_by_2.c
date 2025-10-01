// Program: Divisible by 2

// Logic: If N % 2 == 0, output 1 or else 0

#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    printf("%d", N % 2 == 0);

    return 0;
}

/*
Input 1:
5

Output 1:
0

Input 2:
24

Output 2:
1
*/