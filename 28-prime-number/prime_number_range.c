// Problem: Printing prime numbers for a given range

/*
Logic:
range: low - high

i -> low to high
    j -> 1 to i
    if i % j == 0 -> div++
if div == 2 -> print i
*/

#include <stdio.h>

int main() {
    int low, high;

    int divisor = 0;

    printf("Enter the lower limit of the range: ");
    scanf("%d", &low);
    printf("Enter the higher limit of the range: ");
    scanf("%d", &high);

    printf("\nThe prime numbers in the range %d to %d are:\n", low, high);

    for(int i = low; i <= high; i++) {
        for(int j = 1; j <= i; j++) {
            if(i % j == 0) {
                divisor++;
            }
        }

        if(divisor == 2) {
            printf("%d ", i);
        }

        divisor = 0;
    }
}

/*
Input:
Enter the lower limit of the range: 12
Enter the outer limit of the range: 50

Output:
The prime numbers in the range 12 to 50 are:
13 17 19 23 29 31 37 41 43 47
*/