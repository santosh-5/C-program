#include<Stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int row=0;row<n;row++){
        for(int col=0;col<=row;col++){
            printf("*");
        }
        printf("\n");
    } 
}    