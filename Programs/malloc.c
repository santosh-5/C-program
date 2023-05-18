#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    scanf("%d",&size);
    int *arr=(int*)malloc(size*sizeof(int));
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<size;j++){
        printf("%d ",arr[j]);
    }
}