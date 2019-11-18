// Einbindung von Headern
#include <stdio.h>

// main-Funktion
// <Rückgabetyp> <Name> (<Parameter>) {
//   <Definition>
// }
int main(void) {
    // Variablendefinition
    // - ganzzahlige Typen (int, unsigned, char)
    // - Gleitkommazahlen (float, double)
    int n1;
    int n2;
    int maximum;
    // Einlesen mit scanf
    scanf("%d", &n1);
    scanf("%d", &n2);

    // Vergleichsoperatoren
    // ==, !=, >, <, >=, <=

    // Kontrollstruktur
    // if (test) {
    //   // test ist wahr
    // } else {
    //   // test ist falsch
    // }
    if (n1 > n2) {
        maximum = n1;
    } else {
        maximum = n2;
    }
    // Ausgabe mit printf
    printf("max(%d, %d) = %d\n", n1, n2, maximum);
    // Rückgabewert
    return 0;
}
