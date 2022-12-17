#include <stdio.h>

/**
 * \brief Максимальная длина строки в потоке
 */
#define MAXLINE 1000

#define EOL '\0'

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/**
 * \brief Глава 1.9
 *
 * \details Массивы символов
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

void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != EOL)
        ++i;
}
