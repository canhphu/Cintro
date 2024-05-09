#include<stdio.h>

int main () {
    int sv;
    printf("Nhap so sinh vien cua nhom: ");
    scanf("%d",&sv);
    printf("So sinh vien trong lop nho nhat la: %d\n ", sv / 7);
    printf("So sinh vien trong lop lon nhat la: %d\n", sv / 7 + 1);
    printf("So sinh vien trung binh trong moi lop la: %d\n", sv / 7);
    printf("So lop co so sinh vien tren kich thuoc trung binh: %d\n", sv % 7);
    printf("So sinh vien trong cac lop lon hon kich thuoc trung binh: %d\n", sv / 7 + 1);
    printf("So lop co so sinh vien bang dung kich thuoc trung binh: %d\n", 7 - (sv % 7) );
    return 0;
}