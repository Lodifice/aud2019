#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int factorial = 1;
    // Kontrollstruktur
    // for (<Initialisierung>; <Bedingung>; <Schritt>) {
    //   // wenn Bedingung wahr ist
    // }
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
        // factorial = factorial * i;
    }

    printf("%d\n", factorial);

    return 0;
}
