#include<stdio.h>

int main () {
    int n;
    int a[9];
    int count = 0;
    int total = 0;
    scanf("%d", &n); //nhap chieu cao tieu chuan
    for (int i = 0; i<4; i++) {
        scanf("%d",&a[i]); //nhap chieu cao tung cau thu
    }
    for (int i = 0; i<4; i++) {
        if( a[i] >= n) {
            count++;  //dem so luong cau thu thoa man
            total += a[i]; //tong chieu cao cac cau thu
            }  
        }
        if(count == 0) {
            printf("%d %d",count,total);
        } else
        printf("%d %d",count,total/count); //in ra so luong cau thu va chieu cao trung binh

    }
