#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
            nsp--;
        }
        for(int k=1;k<=n;k++){
            printf("%d ",k);
        }
        printf("\n");
    }
}