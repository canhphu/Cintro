#include<stdio.h>

int main () {
    float pi = 3.14;
    float b;
    printf("Hay nhap ban kinh duong tron vao day: ");
    scanf("%f", &b);
    float chuvi = 2 * pi * b ;
    float dientich = b * b * pi;
    float sbemat = 4 * dientich;
    float thetich = sbemat * b / 3;
    printf("Chu vi hinh tron la: %.2f\n", chuvi );
    printf("Dien tich hinh tron la: %.2f\n", dientich);
    printf("Dien tich be mat hinh cau la: %.2f\n", sbemat);
    printf("The tich hinh cau la: %.2f\n", thetich);
    return 0;

}