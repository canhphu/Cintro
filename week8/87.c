#include<stdio.h>

int main () {
    int dem;
    float diem;
    float tong=0;
    while (diem >= 0) {
        scanf("%f",&diem);
        dem++;
        tong = tong+diem;
    } 
    printf("diem binh quan la: %.2f",tong/dem);
}