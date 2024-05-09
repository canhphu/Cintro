#include<stdio.h>

int main () {
    int gio;
    printf("So gio lam viec ca tuan cua ban la: ");
    scanf("%d", &gio);
    if (gio >= 0 && gio <= 40) {
        printf("So tien ban nhan duoc la: %d VND", 25000 * gio );
    } else  {
        printf("So tien duoc la: %d VND", 1000000 + (gio-40)*40000 );
    }
    return 0;
}