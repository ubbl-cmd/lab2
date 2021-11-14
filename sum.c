#include <stdlib.h>
#include <stdbool.h>
#include "sum.h"
#include "abs_max.h"

int sum(int* array, int len) {
    int max = abs(abs_max(array, len));
    int result = 0;
    bool trulse = false;
    for (int i = 0; i < len; i++) {
        if (abs(array[i]) == max) {
            trulse = true;
        }
        if (trulse) {
            result += array[i];
        }
    }
    return result;
}
