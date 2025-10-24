// Problem: Demonstration of pointers

#include <stdio.h>

int main() {
    int age = 22;

    int *ptr = &age;
    int **pptr = &ptr;

    printf("Age: %d\n", age);
    printf("Age using ptr: %d\n", *ptr);
    printf("Age using pptr: %d\n", **pptr);

    printf("Address of age using age: %p\n", &age);
    printf("Address of age using ptr: %p\n", ptr);
    printf("Address of age using pptr: %p\n", *pptr);

    printf("Address of pptr: %p\n", pptr);

    return 0;
}

/*
Input: 
Age: 22

Output:
Age using ptr: 22
Age using pptr: 22
Address of age using age: 0061FF18
Address of age using ptr: 0061FF18
Address of age using pptr: 0061FF18
Address of pptr: 0061FF14
*/