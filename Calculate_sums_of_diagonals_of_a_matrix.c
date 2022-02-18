#include<stdio.h>
 
int main()
{
int i,j,n,d1=0,d2=0,a[5][5];

scanf("%d",&n);

for(i=0;i<n;++i)
for(j=0;j<n;++j)
{
scanf("%d",&a[i][j]);
if(i==j)
d1+=a[i][j];
if((i+j)==(n-1))
d2+=a[i][j];
}
printf("Principal Diagonal:%d",d1);
printf("
Secondary Diagonal:%d",d2);
return 0;
}
 