#include<stdio.h>
// program that swap the values with only two variables
int main(){
    int a=3,b=4;
    printf("%d %d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
    return 0;
}