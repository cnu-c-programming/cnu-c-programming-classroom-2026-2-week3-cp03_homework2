#include <stdio.h>

void divide(int a, int b, int *q, int *r) {
    // return으로는 값을 하나
    *q = a / b;
    *r = a % b;
}

int main() {
    int a = 27;
    int b = 4;
    int q, r;

    divide(a, b, &q, &r);
    printf("%d %d\n", q, r);

    return 0;
}