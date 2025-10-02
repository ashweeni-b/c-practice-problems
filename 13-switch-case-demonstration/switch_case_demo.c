// Problem: Printing of days of weeks using switch case

/*
Logic:
1 - Sunday
2 - Monday
3 - Tuesday
4 - Wednesday
5 - Thursday
6 - Friday
7 - Saturday
*/

#include <stdio.h>

int main() {
    int day;

    printf("Enter character for the day: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Day entered: Sunday");
            break;

        case 2:
            printf("Day entered: Monday");
            break;

        case 3:
            printf("Day entered: Tuesday");
            break;

        case 4:
            printf("Day entered: Wednesday");
            break;

        case 5:
            printf("Day entered: Thursday");
            break;

        case 6:
            printf("Day entered: Friday");
            break;

        case 7:
            printf("Day entered: Saturday");
            break;

        default:
            printf("Entered day is invalid");
        
    }

    return 0;
}

/*
Input 1:
Enter character for the day: 6

Output 1: 
Day entered: Friday

Input 2:
Enter character for the day: 9

Output 2:
Entered day is invalide*/