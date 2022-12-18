#include <stdio.h>

/**
 * \brief Максимальный размер кэша
 */
#define MAX_LINE_CACHE 80

/**
 * \brief Символ конца строки
 */
#define EOL '\0'

/**
 * \brief Упражнение 1.17
 *
 * \details Напишите программу для вывода всех строку входного потока имеющих длину более 80 символов.
 *
 * \details Write a program to print all input lines that are longer than 80 characters.
 *
 * \return код завершения программы
 */
int main() {
    /**
     * \brief Символ из потока
     */
    int character;

    /**
     * \brief Количество символов в строке
     */
    int character_number = 0;

    /**
     * \brief Кэш строки
     */
    char line_cache[MAX_LINE_CACHE];

    while ((character = getchar()) != EOF) {
        if (character_number < MAX_LINE_CACHE - 1 && character != '\n') {
            line_cache[character_number++] = character;
            continue;
        }

        if (character_number == MAX_LINE_CACHE - 1 && character != '\n') {
            line_cache[character_number++] = EOL;
            printf("%s", line_cache);
        }

        if (character != '\n') {
            putchar(character);
            character_number++;
        } else {
            if (character_number > MAX_LINE_CACHE) {
                putchar(character);
            }
            character_number = 0;
        }
    }

    return 0;
}
