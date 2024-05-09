#include<stdio.h>

int kt(int n) {
    int k = 1;
    if(n<10) {
        return k;
    } else {
        while (n >= 10) {
            n = n/10;
            k++;
        }
        return k;
    }
}
int main () {
    int n;
    scanf("%d",&n);
    printf("%d",kt(n));
}