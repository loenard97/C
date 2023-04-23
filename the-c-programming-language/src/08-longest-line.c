#include <stdio.h>
#include "08-longest-line.h"

/* Get next line from input */
int get_next_line(char line[], int maxline) {
    int i;
    char c;

    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

/* copy char[] from into to */
EXIT_STATUS copy(char from[], char to[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
    return EXIT_SUCCESS;
}

/* print longest line of input */
EXIT_STATUS longest_line() {
    int len;
    int max;
    int maxlen = 100;
    char line[maxlen];
    char longest[maxlen];

    max = 0;
    while ((len = get_next_line(line, maxlen)) > 0) {
        if (len > max) {
            max = len;
            copy(line, longest);
        }
    }
    if (max > 0)
        printf("\nThe longest line in the input was:\n%s", longest);
    return EXIT_SUCCESS;
}
