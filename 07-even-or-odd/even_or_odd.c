// Program: Even or Odd

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
4

Output 1:
1

Input 2:
3

Output 2:
0
*/