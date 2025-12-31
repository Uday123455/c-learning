#include<stdio.h>
void modify(int *ptr);
int main(){
    int uday;
    int *ptr=&uday;
    printf("memory address of the variable uday:%d\n",&uday);
    *ptr=10;
    printf("value before modification:%d\n",*ptr);
    modify(ptr);
    printf("value after modification:%d\n",*ptr);
    return 0;
}

void modify(int *ptr){
    *ptr=5;
}

// lv on 31 DEC 2025 13:22 IST BY UDAY
// wap which Declares an int, Prints its address,Uses a pointer to modify its value