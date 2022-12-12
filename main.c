#include <stdio.h>

int main() {
    int character, spaces;

    spaces = 0;
    while ((character = getchar()) != EOF) {
        if (' ' == character) {
            ++spaces;
        } else {
            spaces = 0;
        }

        if (spaces > 1) {
            continue;
        }

        putchar(character);
    }

    return 0;
}
