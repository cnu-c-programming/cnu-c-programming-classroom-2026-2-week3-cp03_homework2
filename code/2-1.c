#include <stdio.h>

void f(int x)
{
    x = x + 1;
    printf("%d\n", x);
}

int main()
{
    int x = 10;

    printf("%d\n", x);
    f(x);
    printf("%d\n", x);

    return 0;
}