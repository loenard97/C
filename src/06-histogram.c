#include <stdio.h>
#include "06-histogram.h"

/* histogram of word length printed horizontally */
void histlen_hori() {
    int c;
    int cur_len = 0;
    int histogram[10];
    for (int i = 0; i < 10; ++i)
        histogram[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            ++histogram[cur_len];
            cur_len = 0;
        } else if (cur_len < 9) {
            ++cur_len;
        }
    }

    printf("\nHistogram of word lengths:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d: ", i);
        for (int j = 0; j < histogram[i]; ++j) {
            putchar('-');
        }
        putchar('\n');
    }
}

/* histogram of word length printed vertically */
void histlen_vert() {
    int c;
    int max_val = 0;
    int cur_len = 0;
    int histogram[10];
    for (int i = 0; i < 10; ++i)
        histogram[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            ++histogram[cur_len];
            cur_len = 0;
        } else if (cur_len < 9) {
            ++cur_len;
        }
    }

    for (int i = 0; i < 10; ++i) {
        if (max_val < histogram[i])
            max_val = histogram[i];
    }

    printf("\nHistogram of word lengths:\n");
    for (int i = max_val; i > 0; --i) {
        for (int j = 0; j < 10; ++j) {
            if (i > histogram[j]) {
                putchar(' ');
            } else {
                putchar('|');
            }
            putchar(' ');
        }
        putchar('\n');
    }
    for (int i = 0; i < 10; ++i)
        printf("%d ", i);
    putchar('\n');
}
