#include<stdio.h>

int even(int *a,int b) {
    int count=0;
    for (int i = 0; i<b;i++) {
        if(*(a+i) % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main () {
    int *a;
    int b;
    printf("Nhap so phan tu trong mang: "); 
    scanf("%d",&b);
    printf("Nhap mang: ");
    for(int i = 0; i<b; i++) {
        scanf("%d",(a+i));
    }
    printf("So phan tu chan la: %d",even(a,b));
}