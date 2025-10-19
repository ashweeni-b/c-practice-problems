// Problem: Greeting the user

/* 
Logic: 
If nationality is I or i, print Namaste.
If nationality is F or f, print Bonjour.
If nationality is any other character, print Hello.

*/

#include <stdio.h>

void printNamaste();
void printBonjour();

int main() {
    char nationality;

    printf("Enter nationality: ");
    scanf("%c", &nationality);

    switch (nationality)
    {
    case 'I':
    case 'i':
        printNamaste();
        break;
    
    case 'F':
    case 'f':
        printBonjour();
        break;

    default:
        printf("Hello");
        break;
    }
    
    return 0;
}

void printNamaste() {
    printf("Namaste\n");
}

void printBonjour() {
    printf("Bonjour\n");
}

/*
Input 1:
Enter nationality: i

Output 1:
Namaste

Input 2:
Enter nationality: f

Output 2:
Bonjour

Input 3:
Enter nationality: b

Output 3:
Hello

*/