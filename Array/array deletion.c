#include<stdio.h>
void display(int *a,int size){
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}
int main()
{
    int size,arr[100],pos,data;
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);

    scanf("%d",&pos);

    for(int i=pos;i<size;i++){
        arr[i]=arr[i+1];
    }
    display(arr,size-1);
    return 0;
}