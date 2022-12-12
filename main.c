#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int character, state;

    while ((character = getchar()) != EOF) {
        if (' ' == character || '\n' == character || '\t' == character) {
            if (OUT == state) {
                continue;
            } else {
                putchar('\n');
            }
            state = OUT;
        } else {
            state = IN;
            putchar(character);
        }
    }

    return 0;
}
