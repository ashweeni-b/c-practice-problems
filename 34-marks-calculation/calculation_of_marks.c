// Problem: Calculation of percentage marks of student

/*
Logic:
Percentage of marks = (Sum of marks / Total marks) * 100
*/

#include <stdio.h>

float percentageMarks(int science, int math, int sanskrit);

int main() {
    int science, math, sanskrit;

    printf("Enter marks in Science: ");
    scanf("%d", &science);

    printf("Enter marks in Math: ");
    scanf("%d", &math);

    printf("Enter marks in Sanskrit: ");
    scanf("%d", &sanskrit);

    printf("Percentage obtained = %f", percentageMarks(science, math, sanskrit));

    return 0;
}

float percentageMarks(int science, int math, int sanskrit) {
    return ((science + math + sanskrit) / 300.0) * 100.0;
}

/*
Input 1:
Enter marks in Science: 80
Enter marks in Math: 90
Enter marks in Sanskrit: 99

Output 1:
Percentage obtained = 89.666664

Input 2:
Enter marks in Science: 70
Enter marks in Math: 95
Enter marks in Sanskrit: 80

Output 2:
Percentage obtained = 81.666664
*/