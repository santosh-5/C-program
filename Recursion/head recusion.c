#include<stdio.h>
void display(int a){
    if(a==0){
        return;
    }
    display(a-1);
    printf("%d ",a);
}
int main(){
    int n;
    scanf("%d",&n);
    display(n);
}