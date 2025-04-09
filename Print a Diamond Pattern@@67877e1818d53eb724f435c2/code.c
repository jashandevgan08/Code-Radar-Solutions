#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nst = 1;           // Number of stars
    int nsp = n - 1;       // Number of spaces

    // Top half
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= nsp; j++) {
            printf(" ");
        }
        for(int k = 1; k <= nst; k++) {
            printf("*");
        }
        printf("\n");
        nsp--;
        nst += 2;
    }

    // Bottom half (N-1 rows)
    nsp = 1;
    nst -= 4;

    for(int i = 1; i <= n - 1; i++) {
        for(int j = 1; j <= nsp; j++) {
            printf(" ");
        }
        for(int k = 1; k <= nst; k++) {
            printf("*");
        }
        printf("\n");
        nsp++;
        nst -= 2;
    }

    return 0;
}
