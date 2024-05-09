#include<stdio.h>
#include<math.h>

int tong(int n) {
    int tong=0;
    for(int i = 1; i<=n; i++) {
        tong += i*i*i;
    }
    return tong;
}

void uoc(int n) {
    for(int i = 1; i<=n; i++) {
        if(n%i==0) {
            printf("%d ",i);
        }
    }
}

void square(int n) {
    for(int i = 1; i<=n; i++) {
        printf("%d ",i*i);
    }
}

int main () {
    int n;
    scanf("%d",&n);
   printf("%d",tong(n));
    printf("\n");uoc(n);
    printf("\n");square(n);
}