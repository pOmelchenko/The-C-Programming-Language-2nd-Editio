#include <stdio.h>

int main() {
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;

    printf("%d\n", nc);

    return 0;
}
