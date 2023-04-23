#include <stdio.h>
#include "02-conversion.h"

/* Fahrenheit to Celsius table*/
void ftc() {
    float celc;
    printf("Fahrenheit - Celcius\n");
    for (int fahr = 0; fahr <= 300; fahr += 20) {
        celc = 5.0 / 9.0 * (fahr - 32);
        printf("%3d\t%5.1f\n", fahr, celc);
    }
}
