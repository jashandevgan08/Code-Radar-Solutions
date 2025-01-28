#include <stdio.h>

int main(){
    long long int a,b,c,d;
    scanf("%lld%lld%lld",&a,&b,&c);
    d=(a*b*c)/3;
    printf("Average: %.2lf\n",double(d));
}