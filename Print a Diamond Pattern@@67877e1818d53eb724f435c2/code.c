int main(){
    int n;
    scanf("%d",&n);
    int nst=1;
    int nsp=n/2;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        if(i<=5/2){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
}