#include <stdio.h>
int main() {
    int a,n,i=0;
    scanf("%d",&n);
    for(i=0,i<n,i++){
        for (int j = 0; j < n - i; j++)
            printf("* ");
        printf("\n");
    }
}