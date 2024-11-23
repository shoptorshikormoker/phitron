#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>20000){
        printf("Gucci Bag\nGucci Belt");
    }
    else if(x>=10000){
        printf("Gucci Bag");
    }
    else if(x>=5000){
        printf("Levis Bag");
    }
    else {
        printf("something");
    }
    return 0;
}