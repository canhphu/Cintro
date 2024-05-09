#include<stdio.h>
#include<math.h>

int main () {
    double n;
    printf("Nhap so can tinh can 2: ");
    scanf("%lf",&n);
    double x=n/2; 
    for (int i = 0; i<=100; i++) {
        x=0.5*(x+n/x);
    }
    printf("%lf",x);
    
}