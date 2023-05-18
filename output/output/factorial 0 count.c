#include<stdio.h>
int main()
{
    int n,sum=00;
    scanf("%d",&n);
    while(n>=5){
        sum=sum+n/5;
        n=n/5;
    }
    printf("%d",sum);
} 