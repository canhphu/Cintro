#include<stdio.h>
#include<string.h>
#include<math.h>

void dulieu() {
    int soluong;
    char ten[4];
    float dientich;
    int dieuhoa;
    nhap:
    printf("Hay nhap so luong phong tro: ");
    scanf("%d",&soluong);
    if(soluong<0) {
        printf("So luong phong khong hop le, vui long thu lai\n");
        goto nhap;
    }
    nhap1:
    printf("Xin moi nhap thong tin phong tro:\n");
    for(int i = 1; i<=soluong; i++) {
       printf("Phong tro so %d: ",i);
        printf("\nTen: ");
        scanf("%s",&ten);
        printf("Dien tich: ");
        scanf("%d",&dientich);
        printf("Dieu hoa: ");
        scanf("%d",&dieuhoa);
    }
    //if( dientich<10 || dientich>40 || dieuhoa != 0 || dieuhoa!=1) {
     //   printf("Du lieu khong hop le, vui long thu lai\n");
       // goto nhap1;
    //}
}

int main () {
    dulieu();
}