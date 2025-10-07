// Problem: Keep taking numbers from user until multiple of 7 is encountered

#include <stdio.h>

int main() {
    int num;

    for ( ; ; ) {
        printf("Enter the value of num:");
        scanf("%d", &num);

        if (num % 7 == 0) {
            printf("Entered multiple of 7\n");
            break;
        }
    }
    return 0;
}

/*
Output:
Enter the value of num:2
Enter the value of num:43
Enter the value of num:22 
Enter the value of num:54
Enter the value of num:34
Enter the value of num:35
Entered multiple of 7
*/