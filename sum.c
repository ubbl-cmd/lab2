#include <stdlib.h>
#include "sum.h"
#include "abs_max.h"

int sum(int* array, int len) {
    int max = abs_max(array, len);
    int result = 0;
    for (int i = len - 1; abs(array[i + 1]) != max; i--) {
        result += array[i];
    }
    return result;
}
