#include<stdio.h>
int main(){
    int n;
    char ch;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            ch='A'+j-1;
            printf("%c ",ch);
        }
        printf("\n");
    }
}