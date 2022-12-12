#include <stdio.h>

int main() {
    int character;

    while ((character = getchar()) != EOF) {
        if ('\n' == character) {
            printf("\\n");
        } else if ('\t' == character) {
            printf("\\t");
        } else if ('\b' == character) {
            printf("\\b");
        } else if ('\\' == character) {
            printf("\\");
        } else {
            putchar(character);
        }
    }

    return 0;
}
