#include<stdio.h>

int main () {
    int a,b,c;
    printf("Nhap 3 so: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a > b && a > c) {
        printf("%d la so lon nhat\n",a);
        if( b > c) {
            printf("%d la so nho nhat\n",c);
        } else {
            printf("%d la so nho nhat\n",b);
        }
    } else if ( a < b && a > c) {
        printf("%d la so lon nhat\n%d la so nho nhat\n",b,c);
    } else if ( a < b && a < c) {
        printf("%d la so nho nhat\n",a);
        if (b < c) {
            printf("%d la so lon nhat\n",c);
        } else {
            printf("%d la so lon nhat\n",b);
        }
    } else if (a > b && a < c) {
        printf("%d la so lon nhat\n%d la so nho nhat",c,b);
    } 
    return 0;
}