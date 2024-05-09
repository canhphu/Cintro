#include<stdio.h>

int main () {
    int hs;
    float diem;
    printf("So sinh vien duoc khao sat: ");
    scanf("%d",&hs);
    int count=0;
    int pass=0;
    int miss= 0;
    while (count < hs) {
        printf("Diem cua sinh vien: ");
        scanf("%f",&diem);
        printf("\n");
        if(diem >= 4) {
            pass++;
        } else {
            miss++;
    }
    count++;
    }
    printf("So sinh vien do la: %d\n",pass);
    printf("So sinh vien truot la: %d",miss);
}
