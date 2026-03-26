#include <stdio.h>

int power(int a, int b)
{
    int r;

    if (b == 0) {
        return 1; // 0승은 1
    }

    r = power(a, b - 1);
    return a * r;
}

int main()
{
    printf("%d\n", power(2, 3));
    printf("%d\n", power(5, 0));
    printf("%d\n", power(3, 4));

    return 0;
}