// Problem: Average of three numbers

// Logic: num1 + num2 + num3 / 3

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    float average = (num1 + num2 + num3) / 3.0;

    printf("Average of three numbers is %f", average);

    return 0;
}

/*
Input:
Enter numbers: 2 3 4

Output:
Average of three numbers is 3.000000

Input:
Enter numbers: 23 44 54

Output:
Average of three numbers is 40.333332
*/