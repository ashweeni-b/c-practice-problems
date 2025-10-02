// Problem: To grade the marks of students according to the criterion given.

/*
Logic:
marks >= 90 && marks <= 100 --> A+
marks >= 70 && marks < 90 --> A
marks >= 30 && marks < 70 --> B
marks < 30 --> C
*/

#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks < 30) {
        printf("C");
    }
    else if (marks >= 30 && marks < 70) {
        printf("B");
    }
    else if (marks >= 70 && marks < 90) {
        printf("A");
    }
    else {
        printf("A+");
    }

    return 0;
}

/*
Input 1:
Enter marks: 99

Output 1:
A+

Input 2:
Enter marks: 2

Output 2:
C
*/