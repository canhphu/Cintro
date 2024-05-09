#include<stdio.h>

int main () {
    float km;
    printf("Nhap gia tri kilomet: ");
    scanf("%f",&km);
    float dam = 0.62 * km;
    printf("%.4f km = %.4f dam", km,dam);
    return 0;
}