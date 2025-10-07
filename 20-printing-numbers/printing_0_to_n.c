// Problem: To output numbers from 1 to n using while loop
// n is given by the user

#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i = 1;

    while (i <= n) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}

/*
Input 1:
Enter the value of n: 4

Output 1:
1
2
3
4

Input 2:
Enter the value of n: 2

Output 2:
1
2
*/