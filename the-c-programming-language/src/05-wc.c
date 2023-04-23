#include <stdio.h>
#include "header/bool.h"
#include "05-wc.h"

/* count number of characters */
void wc() {
    long count;
    for (count = 0; getchar() != EOF; ++count)
        ;
    printf("\nYou input %ld characters.\n", count);
}

/* count number of whitespace characters */
void wc_whitespace() {
    int c;
    long int count = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ')
            ++count;
    }
    printf("\nYour input has %ld whitespace characters.\n", count);
}

/* count lines words and characters */
void wcl() {
    int c;
    long lines, words, characters;
    lines = words = characters = 0;
    bool in_word = false;

    while ((c = getchar()) != EOF) {
        ++characters;
        if (c == '\n')
            ++lines;
        if (c == '\n' || c == '\t' || c == ' ')
            in_word = false;
        else if (in_word == false) {
            in_word = true;
            ++words;
        }
    }
    printf("\nYour input has %ld lines, %ld words and %ld characters.\n", lines, words, characters);
}

/* count number of digits */
void wcd() {
    int c;
    int ndigits[10];
    
    for (int i = 0; i<10; ++i)
        ndigits[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            ++ndigits[c-'0'];
    }

    printf("\nThe digits 0 to 9 appeared this often:\n");
    for (int i = 0; i < 10; ++i)
        printf("%d ", ndigits[i]);
    putchar('\n');
}
