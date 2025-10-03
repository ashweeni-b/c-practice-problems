// Problem: To check whether a character is digit or not

// Logic If the character is digit i.e. char >= '0' && char <= '9', output 1 else 0

#include <stdio.h>

int main() {
    char ch;

    printf("Enter character: ");
    scanf("%c", &ch);

    printf("%d", ch >= '0' && ch <= '9');

    return 0;
}

/*
Input: 
Enter character: *

Output: 
0

Input:
Enter character: 4

Output:
1
*/