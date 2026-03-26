#include <stdio.h>

void swap(int *x, int *y) {
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

int main() {
    int x = 100;
    int y = 200;
// 포인터(주소)를 넘기기
    printf("before: %d %d\n", x, y);
    swap(&x, &y);
    printf("after: %d %d\n", x, y);

    return 0;
}