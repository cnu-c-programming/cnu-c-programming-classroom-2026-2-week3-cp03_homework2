#include <stdio.h>

void f() {
    static int s = 0;
    s++;
    printf("%d\n", s);
}

int main() {
    f();
    f();
    f();

    return 0;
}