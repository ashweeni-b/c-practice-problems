// Problem: Printing odd numbers from 5 to 50

#include <stdio.h>

int main() {
    for(int i = 5; i <= 50; i++) {
        if(i % 2 == 0) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}

/*
Output:
5
7
9
11
13
15
17
19
21
23
25
27
29
31
33
35
37
39
41
43
45
47
49
*/