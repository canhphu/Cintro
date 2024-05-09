#include<stdio.h>
#include<stdlib.h>

int main () {
    int a[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(int i = 0; i<n; i++) {
        if(a[i]!=a[n-i-1]) {
            printf("Day khong phai la mang doi xung");
            exit(1);
        } 
    }
    printf("Day la mang doi xung");
}