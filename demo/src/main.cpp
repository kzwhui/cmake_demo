#include <stdint.h>
#include <stdio.h>
#include "math/add.h"

int32_t main(int32_t argc, char** argv) {
    int32_t x = 3;
    int32_t y = 4;
    int32_t ans = add(x, y);
    printf("%d + %d = %d\n", x, y, ans);
    return 0;
}
