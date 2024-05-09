#include<stdio.h>

int isLeapYear(int n) {
    if(n%100!=0) {
        if (n%4==0) {
            return 1;
        }
    }if (n%100==0) {
        if (n%400==0) {
            return 1;
        } else return 0;
    } else return 0;
} 
int main () {
    int n;
    scanf("%d",&n);
    if(isLeapYear(n)==1) {
        printf("%d la nam nhuan",n);
    } if(isLeapYear(n)==0) {
        printf("%d khong phai nam nhuan",n);
    }
}