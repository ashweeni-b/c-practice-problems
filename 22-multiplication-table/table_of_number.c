// Problem: To output the multiplication table of n, where n is input by the user

#include <stdio.h>

int main() {
    int num;

    printf("Enter the value of num:");
    scanf("%d", &num);

    printf("Table of %d:\n", num);

    for(int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    printf("Reverse table of %d\n", num);

    for(int i = 10; i >= 0; i--) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

/*
Input 1:
Enter the value of num: 4

Output 1:
Table of 4:
4 x 0 = 0
4 x 1 = 4
4 x 2 = 8
4 x 3 = 12
4 x 4 = 16
4 x 5 = 20
4 x 6 = 24
4 x 7 = 28
4 x 8 = 32
4 x 9 = 36
4 x 10 = 40

Input 2:
Enter the value of num: 2

Output 2:
Table of 2:
2 x 0 = 0
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
2 x 10 = 20
*/