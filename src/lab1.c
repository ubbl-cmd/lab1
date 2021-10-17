#include <stdio.h>
#include <stdlib.h>
#define MAXINT 2147483647
#define MININT -MAXINT - 1

int main(void) {
    int mode = -1;
    scanf("%d", &mode);
    if (3 < mode || mode < 0) {
        printf("Данные некорректны\n");
        return 0;
    }
    int tmp = 0;
    int abs_max = MININT;
    int abs_min = MAXINT;
    long long int tmp_sum = 0;
    int max = 0;
    int min = 0;
    while (scanf("%d", &tmp) == 1) {
        tmp_sum = tmp_sum + tmp;
        if (abs(tmp) < abs_min) {
            abs_min = abs(tmp);
            min = tmp;
        }
        if (abs(tmp) > abs_max) {
            abs_max = abs(tmp);
            max = tmp;
            tmp_sum = tmp;
        }
    }

    if (mode == 0) {
        printf("%d\n", max);
    } else if (mode == 1) {
        printf("%d\n", min);
    } else if (mode == 2) {
        printf("%d\n", max - min);
    } else if (mode == 3) {
        printf("%lld\n", tmp_sum);
    }

    return 0;
}
