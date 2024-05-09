#include<stdio.h>

int main () {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int* tro1=&a;
    int* tro2=&b;
    int* tro3=&c;
    printf("Gia tri tham chieu cua a la: %p",*tro1);
    printf("\nGia tri tham chieu cua b la: %p",*tro2);
    printf("\nGia tri tham chieu cua c la: %p",*tro3);

}