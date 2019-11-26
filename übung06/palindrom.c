#include <stdio.h>

int palindrom(char arr[], unsigned length) {
    for (int i = 0; i < length / 2; ++i) {
        if (arr[i] != arr[length - i - 1]) {
            // Vorsicht:             ^ in Übung vergessen
            return 0;
        }
    }
    return 1;
}

int main(void) {
    char arr[] = {'a', 'b', 'b', 'a'};
    // Automatische Berechnung der Größe mit `sizeof`
    // Funktioniert nur im Gültigkeitsbereich, in dem `arr` initialisiert wurde
    // – nicht innerhalb von `palindrom`!
    unsigned length = sizeof arr / sizeof arr[0];
    printf("%u\n", palindrom(arr, length));
}
