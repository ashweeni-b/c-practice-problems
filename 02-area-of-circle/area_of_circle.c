// Problem: Area of Circle

// Formula: Area of circle = 3.1415 * radius * radius

#include <stdio.h>

int main() {
    const float pi = 3.141592654;
    float radius;

    scanf("%f", &radius);

    float area = pi * radius * radius;

    printf("%f", area);

    return 0;
}

/*
Input:
5.0

Output: 
78.5398
*/