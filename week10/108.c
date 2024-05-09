#include<stdio.h>

int main () {
    int a[100];
    int n;
    int temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(int i= 0; i<n/2;i++) {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    for(int i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
}