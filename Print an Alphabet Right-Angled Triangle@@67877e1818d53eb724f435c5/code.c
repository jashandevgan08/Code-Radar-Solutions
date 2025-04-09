#include<stdio.h>
int main(){
    int n;
    char ch;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<n-i+1;j++){
            ch='A'+i-1;
            printf("%c",ch);
        }
    }
}