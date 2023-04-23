#include <stdio.h>
#include "03-cat.h"

/* redirect input to output */
void cat() {
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}

/* replace whitespace characters */
void replace_whitespace() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            printf("\\n\n");
        } else if (c == '\t') {
            printf("\\t");
        } else if (c == ' ') {
            putchar('_');
        } else {
            putchar(c);
        }
    }
}
