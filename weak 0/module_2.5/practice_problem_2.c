#include <stdio.h>

int main () {
    int a,b,sum=0,sub=0,mul=0;
    float div=0.00;
    scanf("%d %d",&a, &b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/(float)b;
    printf("%d + %d = %d\n",a,b,sum);
    printf("%d - %d = %d\n",a,b,sub);
    printf("%d * %d = %d\n",a,b,mul);
    printf("%d / %d = %.2f",a,b,div);

    return 0;
}