#include <stdio.h>

int main(){
    int a,b;
    scanif("%d%d",&a,&b);
    if (b>a){
        printf("True");
    }
    else{
        printf("False");
    }
}