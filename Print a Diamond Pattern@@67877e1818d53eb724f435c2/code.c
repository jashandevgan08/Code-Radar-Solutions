#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            printf(" ");
        }
        for(int k=0;k<n-i+1;k++){
            printf("*");
        }
    printf("\n");
    }
}