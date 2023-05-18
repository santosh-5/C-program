#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];//str1[100]="world";
    scanf("%s",str);
    int i;
    for(i=0;str[i];i++);
    printf("%d",i);
}