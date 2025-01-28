#include <stdio.h>

int main(){
    int a,b;
    scanif("%d%d",&a,&b);
    if (a<b){
        printf("True");
    }
    else{
        printf("False");
    }
}