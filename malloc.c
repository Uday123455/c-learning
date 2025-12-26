#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr=malloc(sizeof(*ptr)*5);
    ptr[0]=10;
    printf("%d\n",ptr[0]);
    free(ptr);
    printf("%d",ptr[0]);
    return 0;
}
// lv on 26 DEC 2025 15:59 IST BY UDAY
// to demonstrate the use of malloc for dynamically allocationg 
// the memory but doesnt not initiliaze it