#include <stdio.h>
#include "04-crypt.h"

/* ROTN encryption */
void rotn(int n) {
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c + n);
    }
}
