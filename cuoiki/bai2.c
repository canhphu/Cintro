#include<stdio.h>

int main () {
    float chiso;
    scanf("%f",&chiso);
    if(chiso>=0 && chiso<3) {
        printf("muc thap");
    } else if(chiso>=3 && chiso<6) {
        printf("muc trung binh");
    } else if (chiso>=6 && chiso<8) {
        printf("muc cao");
    } else if(chiso>=8 && chiso<=11) {
        printf("muc rat cao");
    } else if(chiso>11) {
        printf("muc nguy hiem");
    }
}