#include<stdio.h>
#include<math.h>

int main () {
    long double a,b,c;
    scanf("%Lf%Lf%Lf",&a,&b,&c);
    printf("%.2Lf",(a+b+c)/3);
}