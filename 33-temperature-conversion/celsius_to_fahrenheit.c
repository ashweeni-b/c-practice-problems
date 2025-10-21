// Problem: Temperature Conversion From Celsius to Fahrenheit

// Logic: F = (C * 9/5) + 32

#include <stdio.h>

float CelsiusToFahrenheit(float celsius);

int main() {
    float celsius;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    printf("%.2f Celsius = %.2f Fahrenheit", celsius, CelsiusToFahrenheit(celsius));

    return 0;
}

float CelsiusToFahrenheit(float celsius) {
    return (celsius * 1.8) + 32;
}

/*
Input 1:
Enter temperature in Celsius: 25

Output 1:
25.00 Celsius = 77.00 Fahrenheit

Input 2:
Enter temperature in Celsius: 1

Output 2:
1.00 Celsius = 33.80 Fahrenheit
*/