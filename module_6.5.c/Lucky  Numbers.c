#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int rightDigit =a%10;
    int leftDigit=a/10;
   if( rightDigit%leftDigit==0|| leftDigit%rightDigit==0){
     printf("YES");
   }
   else{
    printf("NO");
   }

    return 0;
}