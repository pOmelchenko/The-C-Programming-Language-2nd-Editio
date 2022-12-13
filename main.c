#include <stdio.h>

int main() {
    int character, index, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (index = 0; index < 10; ++index)
        ndigit[index] = 0;

    while ((character = getchar()) != EOF) {
        if (character >= '0' && character <= '9')
            ++ndigit[character - '0'];
        else if (character == ' ' || character == '\n' || character == '\t')
            ++nwhite;
        else
            ++nother;
    }

    for (index = 0; index < 10; ++index)
        printf(" %d", ndigit[index]);
    printf(", white_space = %d, other = %d\n", nwhite, nother);

    return 0;
}
