#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<9;i++){
        int t=n,count=0;
        while (t!=0)
        {
            int last=t%10;
            if(last==i){
                count++;
            }
            t=t/10;
        }
        printf("%d-%d",i,count);
    }
    return 0;
}