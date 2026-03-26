#include <stdio.h>

int g = 0;

void f()
{
    int local_var = 1;
    static int static_var = 0;

    g++;
    static_var++;

    printf("global_var: %d\n", g);
    printf("static_var: %d\n", static_var);
    printf("local_var: %d\n", local_var);
    if (g < 3) {
        printf("\n");
    }
}

int main()
{
    f();
    f();
    f();

    return 0;
}