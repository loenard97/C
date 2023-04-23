#include "07-power.h"

/* get i-th power of n */
int power(int n, int i) {
    int ret = 1;
    for (ret = 1; i > 0; --i)
        ret = ret * n;
    return ret;
}
