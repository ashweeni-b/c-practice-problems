// Problem: To output numbers from 0 to 5 using do while loop

#include <stdio.h>

int main() {
    int i = 0;

    do {
        printf("%d\n", i);
        i++;
    }
    while(i <= 5);

    return 0;
}

/*
Output:
0
1
2
3
4
5
*/