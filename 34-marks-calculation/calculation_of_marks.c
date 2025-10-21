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