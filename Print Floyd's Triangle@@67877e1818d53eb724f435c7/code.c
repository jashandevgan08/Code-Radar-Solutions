#include<stdio.h>

int main(){
    int n;
    int num = 1;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", num);
            num++;
        }
        // After finishing a row, skip next number if it's odd
        if(num % 2 != 0){
            num++;
        }
        printf("\n");
    }

    return 0;
}
