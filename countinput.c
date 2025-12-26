#include<stdio.h>
int main(){
    long uday=0;
    while(getchar()!=EOF){
        ++uday;
        printf("%ld\n",uday);
    }
    return 0;
}