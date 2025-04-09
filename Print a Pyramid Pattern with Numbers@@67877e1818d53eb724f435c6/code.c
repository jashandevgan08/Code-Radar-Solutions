#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        printf("\n");
    }
}