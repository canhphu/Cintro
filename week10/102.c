#include<stdio.h>

int main () {
    int n;
    int sum=0;
    int a[1000];
    scanf("%d",&n);
    for(int i = 0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    for(int i = 1; i<n-1; i++) {
        if(a[i]>a[i+1] && a[i]>a[i-1]) {
            sum+=a[i];
        }
    }
    printf("%d",sum);
}