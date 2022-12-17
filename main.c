#include <stdio.h>

#define IN 1
#define OUT 0

/**
 * \brief Упражнение 1.13
 *
 * \details Напишите программу для вывода гистограммы длин слов во входном потоке.
 * Построить гистограмму с горизонтальными рядами легко, а вот с вертикальными столбцами трудней.
 *
 * \return int
 */
int main() {
    int max_length = 21, length = 0, character, state;

    // инициализировать массив указав лимитом количество символов в самом длинном слове
    int words[max_length];

    // обнулить все элементы массива
    for (int i = 0; i < max_length; i++) {
        words[i] = 0;
    }

    int actual_max_length = 0;

    // пересчитать все слова
    while ((character = getchar()) != EOF) {
        if (' ' == character || '\n' == character || '\t' == character) {
            if (OUT == state) {
                continue;
            }

            ++words[length];

            if (actual_max_length < words[length]) {
                actual_max_length = words[length];
            }

            // находим актуальный максимум
            state = OUT;
            length = 0;
        } else {
            state = IN;
            ++length;
        }
    }

    // вывести гистограмму
    for (int row = actual_max_length; row > 0 ; row--) {
        printf("%3d | ", row);
        for (int column = 1; column < max_length; column++) {
            if (words[column] >= row) {
                printf("%2c%c ", '#', '#');
            } else {
                printf("%2c%c ", '.', '.');
            }
        }
        printf("|\n");

    }

    // вывести подвал графика
    printf("      ");
    for (int column = 1; column < max_length; column++) {
        printf("%3d ", column);
    }
    printf("\n");

    return 0;
}
