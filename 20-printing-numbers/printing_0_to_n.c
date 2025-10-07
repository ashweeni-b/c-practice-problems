// Problem: To output numbers from 1 to n using while loop
// n is given by the user

// Note: This problem can be solved using while loop as well as for loop 

#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i = 0;

    // Using while loop
    printf("Using while loop: \n");
    while (i <= n) {
        printf("%d\n", i);
        i++;
    }

    // Using for loop
    printf("Using for loop: \n");
    for (int j = 0; j <= n; j++) {
        printf("%d\n", j);
    }

    return 0;
}

/*
Input 1:
Enter the value of n: 4

Output 1:
0
1
2
3
4

Input 2:
Enter the value of n: 2

Output 2:
0
1
2
*/