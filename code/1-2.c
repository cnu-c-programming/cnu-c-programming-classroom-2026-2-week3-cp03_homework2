#include <stdio.h>

void print();
int square(int n); //

int main() {
    int n = 5;

    print();
    printf("%d %d\n", n, square(n));

    return 0;
}

void print() {
    printf("Welcome to Computer Programming 03 Lab!\n");
}

int square(int n) {
    return n * n;
}