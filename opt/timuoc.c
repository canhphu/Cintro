#include<stdio.h>

int main () {
    int n,i;
    scanf("%d",&n);
    for ( i = -n; i < 0; i++) {
        if ( n % i == 0) {
            printf("%d ",i);
        }
    }
    for ( i = 1; i<=n; i++) {
        if ( n % i == 0) {
            printf("%d ",i);
        }
    }
}