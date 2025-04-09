#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char ch;
    for(int i=1;i<=n;i++){
        for(int j=1;j-i+1;j++){
            ch='A'+i-1;
            printf("%c",ch);
        }
        printf("\n");
    }
}