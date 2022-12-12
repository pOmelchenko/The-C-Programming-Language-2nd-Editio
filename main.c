#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = -50;
    upper = 300;
    step = 10;

    celsius = lower;

    printf("Таблица температур:\n");

    while (celsius <= upper) {
        fahr = (celsius * 9.0/5.0) + 32.0;
        printf("%3.1f %6f\n", celsius, fahr);
        celsius += step;
    }

    return 0;
}
