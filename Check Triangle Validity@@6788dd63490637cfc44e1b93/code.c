#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if ((a*a)+(b*b)==(c*c)){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}