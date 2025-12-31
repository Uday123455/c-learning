#include<stdio.h>

int main(){
    int c,nl=0,bl=0,tl=0;
    while((c=getchar())!=EOF){
        if(c=='\t')tl++;
        else if(c==' ')bl++;
        else if(c=='\n'){
            nl++;
        printf("number of nl:%d\n",nl);
        printf("number of bl:%d\n",bl);
        printf("number of tl: %d\n",tl);
        }
    }
    return 0;
}

// lv on 26 DEC 2025 16:52 IST BY UDAY
// program to read the number of newlines, tabs and blanks in the input