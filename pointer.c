#include<stdio.h>
// demonstrating the use of pointers
int main(){
    int a=10;
    int *ptr=&a;
    printf("%d %d %d",ptr,*ptr,a);
    return 0;
}