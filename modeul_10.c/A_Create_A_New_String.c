#include<stdio.h>
#include<string.h>

int main(){
    char s[1001],t[1001];
    scanf("%s %s",&s,&t);
    int sL=strlen(s);
    int sT=strlen(t);
    printf("%d %d\n",sL,sT);
    printf("%s %s\n",s,t);
    return 0;
}