#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int row=0;row<n;row++){
        for(int spc=row+1;spc<n;spc++){
            printf(" ");
        }
        for(int col=0;col<=row;col++){
            printf("* ");
        }
        printf("\n");
    }
}