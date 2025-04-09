#include<stdio.h>
int main(){
    int n;
    int num=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        num++;
        for(int j=1;j<=i;j++){
            printf("%d",num);
        }
        printf("\n");
    }
}