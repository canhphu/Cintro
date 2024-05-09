#include<stdio.h>

int ke(int m, int v) {
    return m*v*v/2;
}

int main () {
    int m,v;
    scanf("%d%d",&m,&v);
    printf("%d",ke(m,v));
}