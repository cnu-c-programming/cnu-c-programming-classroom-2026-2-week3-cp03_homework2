#include <stdio.h>

void f() {
    int i = 1;
    static int s = 0; // 누적
    s++;
    printf("i: %d s: %d\n", i, s);
}

int main() {
    f();
    f();
    f(); // static 값 증가

    return 0;
}