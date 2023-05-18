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

    scanf("%d %d",&pos,&data);

    for(int i=size;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=data;
    display(arr,size+1);
    return 0;
}