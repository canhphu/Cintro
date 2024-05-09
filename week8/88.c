#include<stdio.h>

int main () {
    int n,i=1;
    int f=1;
    scanf("%d",&n);
    while(i<=n) {
        f=f*i;
        printf("%d!=%d\n",i,f);
        i++;
    }
    
}