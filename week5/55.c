#include<stdio.h>

int main() {
    float a,b,max;
    printf("Nhap 2 so thuc a,b:");
    scanf("%f%f",&a,&b);
    if (a>b) {
        printf("a lon hon b");
    } if (b>a) {
        printf("b lon hon a");
    } if (a == b) {
        printf("a bang b");
    }
    return 0;
}