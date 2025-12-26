#include<stdio.h>
#define UPPER 10
#define LOWER 0
int main(){
    int array[UPPER]={0,1,2,3,4,5,6,7,8,9};
    int *ptr=array;
    for (int i = LOWER; i < UPPER; i++)
    {
        printf("%d\n",*(ptr+i));
    }
    
    return 0;
}
// lv on 26 DEC 2025 14:27 IST BY UDAY
// to demonstrate the use of pointer arithmetic here we can
// increment the pointer which takes the pointer to next location