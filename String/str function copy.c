#include<stdio.h>
#include<string.h>
void strcopy(char* s1,char* s2){
    int i;
    for(i=0;s2[i];i++){
        s1[i]=s2[i];
    }
    s1[i]='\0';
}
int main()
{
    int len;
}