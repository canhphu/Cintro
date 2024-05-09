#include<stdio.h>

int main () {
    int n;
    nhap:
    printf("Nhap thang: ");
    scanf("%d",&n);
    while ( n > 12 || n < 1) {
        printf("Nhap thang ngu vai lon, nhap lai di\n");
        goto nhap;
    }
    if (n == 4 || n == 6 || n == 9 || n == 11) {
        printf("Thang %d co 30 ngay\n", n);
    } else if ( n == 2) {
        printf("Thang %d co 28 hoac 29 ngay", n);
    } else {
        printf("Thang %d co 31 ngay",n);
    }
    return 0;
}