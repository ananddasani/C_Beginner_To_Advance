#include <stdio.h>

int sum(int , int);

int main(){
    int a,b;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("sum of %d and %d is %d",a,b,sum(a,b));
    return 0;
}

int sum(int a , int b){
    return a + b;
}