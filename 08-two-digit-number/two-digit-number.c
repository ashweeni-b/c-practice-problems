// Program: 2 digit number

// Logic: If number > 9 && number < 100, print 1 (true), else 0 (false)

#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    printf("%d", number > 9 && number < 100);

    return 0;
}

/*
Input 1:
3

Output 1:
0

Input 2:
25

Output 2:
1

Input 3:
105

Output 3: 
0
*/