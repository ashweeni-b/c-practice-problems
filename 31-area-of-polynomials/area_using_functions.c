// Problem: Compute the areas of square, rectangle and circle

#include <stdio.h>

int areaSquare(int side);
int areaRectangle(int length, int breadth);
float areaCircle(float radius);

int main() {
    int side, length, breadth;
    float radius;

    printf("Enter side: ");
    scanf("%d", &side);

    printf("Area of square = %d\n", areaSquare(side));

    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter breadth: ");
    scanf("%d", &breadth);

    printf("Area of rectangle = %d\n", areaRectangle(length, breadth));

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Area of circle = %f\n", areaCircle(radius));

    return 0;
}

int areaSquare(int side) {
    return side * side;
}

int areaRectangle(int length, int breadth) {
    return length * breadth;
}

float areaCircle(float radius) {
    return 3.14 * radius * radius;
}