#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr= calloc(10,sizeof(*ptr));
    ptr[0]=1;
    ptr[4]=2;
    for(int i=0;i<10;i++)printf("%d\n",ptr[i]);
    free(ptr);
    return 0;
}
// lv on 26 DEC 2025 16:52 IST BY UDAY
// implementation of calloc which dynamically allocates the memory as well as initialize it with zero