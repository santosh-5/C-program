#include<stdio.h>
#include<limits.h>
int main()
{
    int size,max=INT_MIN,arr[100],smax=INT_MIN;
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]>smax&&arr[i]!=max)
        {
            smax=arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}