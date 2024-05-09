#include<stdio.h>

int main () {
    int n,i;
    scanf("%d",&n);
    int a[n];
    int tong = 0;
    for (i = 0; i<n;i++) {
        scanf("%d",&a[i]);
        tong += a[i];
    }
    printf("%d",tong);
    return 0;
}