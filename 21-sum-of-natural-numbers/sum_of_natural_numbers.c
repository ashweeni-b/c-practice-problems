// Problem: To output the sum of first n natural numbers and print them in reverse

#include <stdio.h>

int main() {
    int num;

    printf("Enter the value of num:");
    scanf("%d", &num);

    int sum = 0;

    for(int i = num; i >= 1; i--) {
        printf("%d\n", i);
        sum += i;
    }

    printf("Sum of natural numbers: %d", sum);
    return 0;
}

/*
Input 1:
Enter the value of num: 4

Output 1:
4
3
2
1
Sum of natural numbers: 10

Input 2:
Enter the value of num: 5

Output 2:
5
4
3
2
1
Sum of natural numbers: 15
*/