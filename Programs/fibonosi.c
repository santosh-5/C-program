#include<stdio.h>
int main()
{
    int n,f1=0,f2=1,f3;
    scanf("%d",&n)
;
if(n==0)
printf("%d ",f1);
else
printf("%d %d ",f1,f2);
for(int i=2;i<=n;i++){
    f3=f1+f2;
    printf("%d ",f3);
    f1=f2;
    f2=f3;
}
return 0;
}