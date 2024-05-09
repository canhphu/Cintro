#include<stdio.h>
#include<string.h>
#define max 100

int main () {
    char a[max];
    char b[max];
    int n;
    printf("Nhap xau ban dau: ");
    fgets(a,max,stdin);
    printf("Nhap xau thay the: ");
    fgets(b,max,stdin);
    nhap:
    printf("Tinh tu dau xau, nhap so luong ban muon sao chep: ");
    scanf("%d",&n);
    if(n>strlen(a)-1) {
        printf("Nhap lai so luong!\n");
        goto nhap;
    }
    for(int i=0;i<n;i++) {
        a[i]=b[i];
    }
    printf("Xau moi la: %s",a);

}