#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    printf("Enter the Size:\n");
    scanf("%d",&size);
    int* arr;
    arr=(int*)malloc(size*sizeof(int));
    printf("Enter the Array Elements:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("How to you want to reallocate:\n");
    int t;
    scanf("%d",&t);
    arr=(int *)realloc(arr,size+t*sizeof(int));
    printf("Enter the Array Elements:\n");
    for(int i=size;i<size+t;i++){
        scanf("%d",arr[i]);
    }
    printf("Enter Array:\n");
    for(int i=0;i<size+2;i++){
        printf("%d ",arr[i]);
    }
}