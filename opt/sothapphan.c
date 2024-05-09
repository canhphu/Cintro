#include<stdio.h>

int main () {
    float n;
    scanf("%f",&n);
    int i = n;
    if ( i > 0) {
    printf("%d %.2f",i,n-i);
    } else {
        printf("%d %.2f",i-1,n-i+1);
    }
}