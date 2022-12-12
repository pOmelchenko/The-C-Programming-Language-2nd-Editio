#include <stdio.h>

int main() {
    int character, new_line, tabs, spaces;

    new_line = 0;
    tabs = 0;
    spaces = 0;
    while ((character = getchar()) != EOF) {
        if ('\n' == character) {
            ++new_line;
        }
        if ('\t' == character) {
            ++tabs;
        }
        if (' ' == character) {
            ++spaces;
        }
    }

    printf("lines: %d\ntabs: %d\nspaces: %d\n", new_line, tabs, spaces);

    return 0;
}
