#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 100
int main () {
    char a[max];
    nhap:
    fgets(a,max,stdin);
    for(int i=0;i<3;i++) {
        if(a[i]<'0' || a[i]>'9') {
            printf("Ma khong phu hop, vui long nhap lai.\n");
            goto nhap;
        }
    }
    for(int i=3;i<7;i++) {
        if(a[i]<'A' || a[i]>'Z') {
            printf("Ma khong phu hop, vui long nhap lai.\n");
            goto nhap;
        }
    }
    printf("Ban da nhap dung ma khach hang.");
}