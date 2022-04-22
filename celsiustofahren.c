#include <stdio.h>
int main()
{
    float celcius, fahrenheit;
    printf("enter the temperature in celsius:");
    scanf("%d\n", &celcius);

    fahrenheit = ((celcius * 9 / 5) + 32);
    printf("%.2f celsius = %.2f fahrenheit",celcius,fahrenheit);

    return (0);
}