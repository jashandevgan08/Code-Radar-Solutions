#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nst = 1;
    int nsp = n / 2;

    for(int i = 1; i <= n+1; i++) {
        for(int j = 1; j <= nsp; j++) {
            printf(" ");
        }
        for(int k = 1; k <= nst; k++) {
            printf("*");
        }

        printf("\n");

        if(i <= (n / 2)) {
            nsp--;
            nst += 2;
        } else {
            nsp++;
            nst -= 2;
        }
    }

    return 0;
}
