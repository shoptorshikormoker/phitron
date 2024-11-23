#include <stdio.h>

int main()
{
    int a,b,sub=0;
    scanf("%d %d",&a,&b);
    sub = a - b;
    if(sub>=0){
        printf("%d",sub);
    }
    else{
        printf("%d",0);
    }
    return 0;
}