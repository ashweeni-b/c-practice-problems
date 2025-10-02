// Problem: To check whether a student passed or failed an exam

// Logic: Student passes an exam if the marks scored is above 30, otherwise it fails

#include <stdio.h>

int main() {
    int marks;
    
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks > 30) {
        printf("Passed the exam\n");
    }
    else {
        printf("Failed the exam\n");
    }

    return 0;
}

/*
Input 1:
Enter marks: 54

Output 1:
Passed the exam

Input 2:
Enter marks: 28

Output 2:
Failed the exam
*/