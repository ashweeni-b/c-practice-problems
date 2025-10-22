// Problem: Deciding season based on temperature

// Logic: If temperature is above 37.0, season is Hot, else Cold.

#include <stdio.h>

char season(float temp);

int main() {
    float temp;

    printf("Enter the temperature: ");
    scanf("%f", &temp);

    season(temp);

    return 0;
}

char season(float temp) {
    if(temp >= 37.0) {
        printf("Season = Hot");
    }
    else {
        printf("Season = Cold");
    }

    return 0;
}

/*
Input 1:
Enter the temperature: 35.9

Output 1:
Season = Cold

Input 2:
Enter the temperature: 43.4

Output 2:
Season = Hot
*/