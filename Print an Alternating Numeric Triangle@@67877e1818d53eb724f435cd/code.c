#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        int num = (i % 2 == 0) ? 0 : 1;  // Even row starts with 0, odd row with 1
        for(int j = 1; j <= i; j++) {
            printf("%d ", num);
            num = 1 - num; // Toggle between 0 and 1
        }
        printf("\n");
    }

    return 0;
}
