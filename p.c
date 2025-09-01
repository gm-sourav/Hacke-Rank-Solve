#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int A[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int x, v;
    scanf("%d %d", &x, &v);

    // Replace x with v
    for (i = 0; i < n; i++) {
        if (A[i] == x) {
            A[i] = v;
        }
    }

    // Print in reverse
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", A[i]);
    }

    return 0;
}
