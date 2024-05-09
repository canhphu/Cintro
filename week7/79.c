#include<stdio.h>

int main () {
    int n,i;
    scanf("%d",&n);
    if ( n == 0) {
        printf("%d! = 1",n);
    } else {
        int kq=1;
        for (i = n; i>=1; i--) {
            kq = kq*i;     
        }
    printf("%d! = %d",n,kq);
    }
}