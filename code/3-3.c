#include <stdio.h>
#include <stdarg.h>

int average(int n, ...) {
    va_list ap;
    int i;
    int sum = 0;

    va_start(ap, n);
    for (i = 0; i < n; i++) {
        sum += va_arg(ap, int);
    }
    va_end(ap);

    return sum / n;
}

int main() {
    printf("%d\n", average(3, 1, 2, 3)); // 평균 구하기

    return 0;
}