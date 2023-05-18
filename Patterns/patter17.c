#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n); 
    for(int row=0;row<n;row++,printf("\n")){
        for(int col=0;col<=row;col++){
            if((row+col+1)%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        
    } 
}