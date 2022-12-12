#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int character, lines, words, characters, state;

    state = OUT;

    lines = 0;
    words = 0;
    characters = 0;

    while ((character = getchar()) != EOF) {
        ++characters;

        if ('\n' == character) {
            ++lines;
        }
        if (' ' == character || '\n' == character || '\t' == character) {
            state = OUT;
        } else if (OUT == state) {
            state = IN;
            ++words;
        }
    }

    printf("%d %d %d\n", lines, words, characters);

    return 0;
}
