#include <stdio.h>

int main(void) {
    for (int i = 2; i <= 1000; ++i) {
        int i_is_prime = 1;
        for (int j = 2; j < i; ++j) {
            if (i % j == 0) {
                i_is_prime = 0;
            }
        }
        if (i_is_prime) {
            printf("%d\n", i);
        }
    }
    return 0;
}
