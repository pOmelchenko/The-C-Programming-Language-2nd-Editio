#include <stdio.h>

void convert_celsius_to_fahrenheit(int lower, int upper, int step);

/**
 * \brief Глава 1.7
 *
 * \details Функции
 *
 * \return int
 */
int main() {
    convert_celsius_to_fahrenheit(0, 300, 10);

    return 0;
}

/**
 * \brief перевод температуры из Цельсий в Фаренгейты
 * @param lower int минимальная температура
 * @param upper int максимальная температура
 * @param step int шаг температуры
 */
void convert_celsius_to_fahrenheit(int lower, int upper, int step) {
    float fahrenheit, celsius;

    fahrenheit = lower;

    while (fahrenheit <= upper) {
        celsius = (5.0/9.0) * (fahrenheit - 32.0);
        printf("%3.0f %6.1f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }
}
