#include<stdio.h>
int main()
{
    int size,max=0,arr[100];
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}