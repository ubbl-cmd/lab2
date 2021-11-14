#include <stdlib.h>
#include "abs_max.h"


int abs_min(int* array, int len) {
    int result = abs(array[0]);
    for (int i = 1; i < len; i++) {
        if (abs(array[i]) < result) {
            result = abs(array[i]);
        }
    }
    return result;
}
