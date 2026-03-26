#include <stdio.h>
#include <stdarg.h>

int max_of(int n, ...) {
    va_list ap;
    int i, m, t;

    va_start(ap, n);
    m = va_arg(ap, int);
    for (i = 1; i < n; i++) {
        t = va_arg(ap, int);
        if (t > m) {
            m = t;
        }
    }
    va_end(ap);

    return m;
}

int main() {
    printf("%d\n", max_of(3, 10, 12, 5));
    printf("%d\n", max_of(4, 6, 1, 2, 3));
    printf("%d\n", max_of(3, 300, 200, 100));

    return 0;
}