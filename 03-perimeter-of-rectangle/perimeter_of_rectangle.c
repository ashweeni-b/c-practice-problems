// Problem: Perimeter of Rectangle

// Formula: Perimeter of rectangle = 2 * (length + breadth)

#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    int perimeter = 2 * (a + b);

    printf("%d", perimeter);

    return 0;
}

/*
Input:
5 4

Output: 
18
*/