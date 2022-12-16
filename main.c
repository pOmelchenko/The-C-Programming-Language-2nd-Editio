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
    int max_length = 10, length = 0, character, state;

    // инициализировать массив указав лимитом количество символов в самом длинном слове
    int words[max_length];

    // обнулить все элементы массива
    for (int i = 0; i < max_length; i++) {
        words[i] = 0;
    }

    // пересчитать все слова
    while ((character = getchar()) != EOF) {
        if (' ' == character || '\n' == character || '\t' == character) {
            if (OUT == state) {
                continue;
            }

            ++words[length];

            state = OUT;
            length = 0;
        } else {
            state = IN;
            ++length;
        }
    }

    // вывести гистограмму
    for (int word = 0; word < max_length; word++) {
        printf("%3d | %4d | ", word, words[word]);
        for (int row = 0; row < words[word]; row++) printf("#");
        printf("\n");
    }

    return 0;
}
