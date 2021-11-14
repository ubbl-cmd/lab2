#include <stdlib.h>
#include "abs_max.h"


int abs_min(int* array, int len) {
    int abs_min = abs(array[0]);
    int result = array[0];
    for (int i = 1; i < len; i++) {
        if (abs(array[i]) < abs_max) {
            abs_min = abs(array[i]);
            result = array[i];
        }
    }
    return result;
}
