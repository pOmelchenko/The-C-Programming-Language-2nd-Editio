#include <stdio.h>

/**
 * \brief Упражнение 1.14
 *
 * \details Напишите программу для вывода гистограммы частот, с которыми встречаются во входном потоке различные символы
 *
 * \return int
 */
int main() {
    int max_length = 255, character;

    // инициализировать массив указав лимитом количество символов в самом длинном слове
    int characters[max_length];

    // обнулить все элементы массива
    for (int i = 0; i < max_length; i++) {
        characters[i] = 0;
    }

    int actual_max_length = 0;

    // пересчитать все слова
    while ((character = getchar()) != EOF) {
        ++characters[character];
    }

    // вывести гистограмму
    for (int ch = 0; ch < max_length; ch++) {
        if (0 == characters[ch]) continue;

        printf("%3d | %4d | ", ch, characters[ch]);
        for (int row = 0; row < characters[ch]; row++) printf("#");
        printf("\n");
    }
    printf("\n");

    return 0;
}
