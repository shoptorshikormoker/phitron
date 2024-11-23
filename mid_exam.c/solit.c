#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n],arIndexCount=0;
    int max_digit=9;
    while(n>0){
        
        while(n < max_digit){
           
            max_digit--;
        }
        n=n-max_digit;
        ar[arIndexCount++]=max_digit;
    }
    printf("%d\n",arIndexCount);
    for (int i = 0; i <arIndexCount; i++)
    {
        printf("%d",ar[i]);
        printf(" ");
    }
    printf("\n");
    
    return 0;
}