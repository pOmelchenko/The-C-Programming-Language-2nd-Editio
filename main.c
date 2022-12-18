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
void copy(char to[], char from[]);

/**
 * \brief Упражнение 1.16
 *
 * \details Доработайте главный модуль программы определения самой длинной строки так, чтобы она выводила правильное
 * значение для какой угодно длины строк входного потока, насколько это позволяет текст
 *
 * \return int
 */
int main() {
    /**
     * \brief Длина текущей строки
     */
    int len;

    /**
     * \brief Текущая максимальная длина
     */
    int max;

    /**
     * \brief Текущая введенная строка
     */
    char line[MAXLINE];

    /**
     * \brief Самая длинная строка из введенных
     */
    char longest[MAXLINE];

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) {
        printf("%s", longest);
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

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = EOL;

    return i;
}

/**
 * \brief copy
 *
 * \details копирует строку 'from' в 'to'; длина 'to' считается достаточной
 *
 * \param to массив куда вставляем строку
 * \param from массив откуда вставляем строку
 */
void copy(char to[], char from[]) {
    int i = 0;

    while ((to[i] = from[i]) != EOL)
        ++i;
}
