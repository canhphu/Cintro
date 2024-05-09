#include<stdio.h>
#include<math.h>

double luong(int n) {
    if(n<10 || n>65) {
        return 0;
    } else if(n<=40) {
        return n*15000;
    } else if(n>40) {
        return 40*15000+(n-40)*1.5*15000;
    }
}

int main () {
    int n;
    scanf("%d",&n);
    printf("%.0lf",luong(n));
}