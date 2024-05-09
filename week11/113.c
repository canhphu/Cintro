#include<stdio.h>

int main () {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int *ptr;
    ptr=&a;
    printf("Value of a: %d\n",*ptr+100);
    ptr=&b;
    printf("Value of b: %d\n",*ptr+100);
    ptr=&c;
    printf("Value of c: %d",*ptr+100);
}