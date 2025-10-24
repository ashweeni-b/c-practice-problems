// Problem: Printing alphabets

#include <stdio.h>

void printAlphabets(char *ch);

int main() {
    char ch = 'A';

    printAlphabets(&ch);

    return 0;
}

void printAlphabets(char *ch) {
    for(char a = *ch; a <= 'Z'; a++) {
        printf("%c ", a);
    }
}

// Output: A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 