#include <stdio.h>
#include <stdlib.h>
#include "abs_max.h"
#include "abs_min.h"
#include "diff.h"
#include "sum.h"

#define MAXINT 2147483647
#define MININT -MAXINT - 1

int main(void) {
    int mode;
    scanf("%d", &mode);
    if (3 < mode || mode < 0) {
        printf("Данные некорректны\n");
        return 0;
    }

    int array[100];
    int len = 0;
    while (scanf("%d", &array[len]) == 1) {
        len++;
    }

    int result;
    if (mode == 0) {
        result = abs_max(array, len);
    } else if (mode == 1) {
        result = abs_min(array, len);
    } else if (mode == 2) {
        result = diff(array, len);
    } else if (mode == 3) {
        result = sum(array, len);
    }
    printf("%d", result);

    return 0;
}
