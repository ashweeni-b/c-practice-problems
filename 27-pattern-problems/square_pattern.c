// Problem: Square Pattern

/*
Logic:
i -> 1 to row, j -> 1 to column
*/

#include <stdio.h>

int main() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/*
Output:
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/