#include <stdio.h>

/**
 * \brief Максимальная длина строки в потоке
 */
#define MAXLINE 1000

/**
 * \brief Символ конца строки
 */
#define EOL '\0'

int get_line(char line[], int maxline);

/**
 * \brief Упражнение 1.16
 *
 * \details Доработайте главный модуль программы определения самой длинной строки так, чтобы она выводила правильное
 * значение для какой угодно длины строк входного потока, насколько это позволяет текст
 *
 * \details Revise the main routine of the longest-line program so it will correctly print the length of arbitrary
 * long input lines, and as much as possible of the text.
 *
 * \return код завершения программы
 */
int main() {
    /**
     * \brief Длина текущей строки
     */
    int len;

    /**
     * \brief Текущая введенная строка
     */
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0) {
        printf("%4d | %s", len, line);
    }

    return 0;
}

/**
 * \brief get_line
 *
 * \details считывает строку в s, возвращает ее длину
 *
 * \param s строка которую читаем
 * \param lim лимит символов в строке
 * \return int длина строки
 */
int get_line(char s[], int lim) {
    int c, i;

    i = 0;

    while ((c = getchar()) != EOF && c != '\n') {
        if (i < lim - 1) {
            s[i++] = c;
        } else {
            i++;
        }
    }

    if (c == '\n') {
        s[i++] = c;
    }

    s[i] = EOL;

    return i;
}
