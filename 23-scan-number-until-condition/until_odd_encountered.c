// Problem: Keep taking numbers from user until user enters odd number

#include <stdio.h>

int main() {
    int num;

    for ( ; ; ) {
        printf("Enter the value of num:");
        scanf("%d", &num);

        if (num % 2 != 0) {
            printf("Entered odd number\n");
            break;
        }
    }
    return 0;
}

/*
Output:
Enter the value of num:2
Enter the value of num:4
Enter the value of num:432
Enter the value of num:3
Entered odd number
*/