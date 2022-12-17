#include <stdio.h>

int power(int, int);

/**
 * \brief Глава 1.7
 *
 * \details Функции
 *
 * \return int
 */
int main() {
    for (int i = 0; i <= 10; ++i)
        printf("%d %d %d\n", i, power(2, i), power(-3, i));

    return 0;
}

/**
 * \brief power: возводит base в n-ю степень; n >= 0
 *
 * \param m int
 * \param n int
 * \return int
 */
int power(int base, int n) {
    int p = 1;

    for (int i = 1; i <= n; ++i)
        p *= base;

    return p;
}
