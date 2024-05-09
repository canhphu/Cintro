#include<stdio.h>

int main () {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a-1240*b>=0) {
        printf("%d",1240*b);
    } else {
        printf("%d",0);
    }
}