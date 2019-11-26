#include <stdio.h>

// int - Ganzzahlen
// unsigned - natürliche Zahlen

unsigned ack(unsigned x, unsigned y) {
    if (x == 0 && y >= 0) {
        return y + 1;
    } else if (y == 0 && x > 0) {
        return ack(x - 1, 1);
    } else {
        return ack(x - 1, ack(x, y - 1));
    }
}

int main(void) {
    unsigned x = 0;
    unsigned y = 42;
    printf("ack(%u,%u) = %u\n", x, y, ack(x, y));
    return 0;
}
