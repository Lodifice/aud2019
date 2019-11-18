#include <stdio.h>

unsigned fib(unsigned n) {
    // Abbruchbedingung: konstanter Wert
    // Logische Operatoren: ||, &&, !
    if (n <= 2) {
        return 1;
    } else {
    // Rekursiver Selbstaufruf
        return fib(n - 1) + fib(n - 2);
    }
}

int M(int);

int F(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n - M(F(n - 1));
    }
}

int M(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n - F(M(n - 1));
    }
}

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        printf("fib(%d) = %d\n", i, fib(i));
    }
    printf("%d\n", M(42));
    return 0;
}
