#include <stdio.h>

void f(int x)
{
    x = 20;
    printf("inside: %d\n", x);
}

int main()
{
    int x = 10;

    printf("before: %d\n", x);
    f(x); // 값만 복사됨
    printf("after: %d\n", x);

    return 0;
}