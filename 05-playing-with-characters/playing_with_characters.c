// Program: Playing with Characters
// HackerRank Question: C > Introduction > Playing With Characters

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    // Declares character ch, string s and sentence sen
    char ch;
    char s[100];
    char sen[100];
    
    //Inputs character ch and string s
    scanf("%c", &ch);
    scanf("%s", &s);
    
    // Inputs sentence sen
    scanf("\n");
    scanf("%[^\n]%*c", &sen);
     
    // Prints the character, string and sentence
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);
    
    return 0;
} 

/*
Input:
C
Language
Welcome To C!!

Output:
C
Language
Welcome To C!!
*/