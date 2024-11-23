#include <stdio.h>
int main()
{
    float temInCelsius, temInFahrenheit, fToC, cToF;
    printf("Input the tempereture in celsious: ");
    scanf("%f", &temInCelsius);
    printf("\nInput the tempereture in fahrenheit: ");
    scanf(" %f", &temInFahrenheit);
    cToF = (temInCelsius * (float)9 / 5) + 32;
    printf("cToF = %.2f\n", cToF);
    fToC = (temInFahrenheit - 32) * (float)5 / 9;
    printf("fToC = %.2f\n", fToC);

    return 0;
}
