// Problem: To determine the case of the character
// i.e. whether the entered character is upper case or lower case

#include <stdio.h>

int main() {
    char ch;

    printf("Enter the character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Entered character is uppercase\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("Entered character is lowercase\n");
    }
    else {
        printf("Entered character is not uppercase or lowercase");
    }

    return 0;
}

/*
Input 1: Enter the character: d
Output 1: Entered character is lowercase

Input 2: Enter the character: D
Output 2: Entered character is uppercase

Input 3: Enter the character: 2
Output 3: Entered character is not uppercase or lowercase
*/