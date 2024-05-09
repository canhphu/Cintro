#include<stdio.h>
#include<math.h>

int main () {
    int a,b;
    scanf("%d%d",&a,&b);
    double solan = a*0.75/b;
    int dapan = ceil(solan);
    printf("%d",dapan);
}
