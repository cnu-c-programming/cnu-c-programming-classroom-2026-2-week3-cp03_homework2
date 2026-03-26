#include <stdio.h>
#include <stdarg.h>

void my_sum(char type, int n, ...) {
    va_list ap;
    int i;
    int sum = 0;

    va_start(ap, n);

    if (type == 'D') {
        for (i = 0; i < n; i++) {
            sum += va_arg(ap, int);
        }
        printf("%d\n", sum);
    }
    else if (type == 'C') {
        for (i = 0; i < n; i++) {
            printf("%c", va_arg(ap, int));
        }
        printf("\n");
    }
    else if (type == 'S') {
        for (i = 0; i < n; i++) {
            printf("%s ", va_arg(ap, char *));
        }
        printf("\n");
    }

    va_end(ap);
}

int main() {
    my_sum('D', 3, 1, 2, 3);
    my_sum('C', 3, 'a', 'b', 'c');
    my_sum('S', 2, "hi", "world"); // 타입 따라 출력

    return 0;
}