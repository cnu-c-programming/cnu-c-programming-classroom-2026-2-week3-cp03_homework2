#include <stdio.h>

int g = 0;

void f()
{
    int l = 1;
    static int s = 0;

    g++;
    s++;
    printf("g: %d l: %d s: %d\n", g, l, s);
}

int main()
{
    f();
    f();
    f(); // g, s는 계속 증가

    return 0;
}