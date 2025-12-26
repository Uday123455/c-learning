#include<stdio.h>
// program to count the newlines
int main(){
    int c,uday;
    uday=0;
    while((c=getchar())!=EOF){
        if(c=='\n')++uday;
    }
    printf("%d\n",uday);
    return 0;
}