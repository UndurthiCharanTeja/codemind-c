#include<stdio.h>
int main(){
    int n,i,a[199],num,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(num==a[i]){
            c+=1;
        }
    }
    printf("%d",c);
}