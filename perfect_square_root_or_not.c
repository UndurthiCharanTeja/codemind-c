#include<stdio.h>
int main(){
    int n,i,res;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if((i*i)==n){
            res=1;
            break;
        }
    }
    if(res==1){
        printf("True");
    }
    else{
        printf("False");
    }
}