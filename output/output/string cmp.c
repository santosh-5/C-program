#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str1[100]="world";
    scanf("%[^\n],str");
    int n=strcmp(str1,str);
    if(n==0)
    printf("same");
    else
    printf("different");
}