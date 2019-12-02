#include <stdio.h>

// iterativ
int skalarProdukt(int a[], int n, int b[], int m) {
    int k = (m > n) ? n : m;
    int summe = 0;
    for (int i = 0; i < k; ++i) {
        summe += a[i] * b[i];
    }
    return summe;
}

// rekursiv
int skalarProdukt2(int a[], int n, int b[], int m) {
    if (n == 0 || m == 0) {
        return 0;
    } else {
        return a[0] * b[0] + skalarProdukt2(a + 1,
                                            n - 1,
                                            b + 1,
                                            m - 1);
    }
}

int main(void) {
    int a[] = {1, 2, 3, 4};
    int b[] = {1, 2, 3};
    printf("%d\n", skalarProdukt(a,
                                 sizeof a / sizeof a[0],
                                 b,
                                 sizeof b / sizeof b[0]));
    return 0;
}
