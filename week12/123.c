#include <stdio.h>
#include <stdlib.h>

void getSale(int *a, int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", a + i);
    }
}

int totalSale(int *a, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(a + i);
    }
    return sum;
}

int main() {
    int *a;
    int n;
    scanf("%d", &n);
    if (n == 0) {
        return 0;
    } else {
        a = malloc(n * sizeof(int));
        getSale(a, n);
        printf("%d", totalSale(a, n));
        free(a);
        return 0;
    }
}
