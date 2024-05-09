#include<stdio.h>
#include<math.h>

int main () {
    int a,b,i;
    int c;
    scanf("%d%d",&a,&b);
    for (i = a*b; i>=1; i--) {
        if (a % i == 0 && b % i == 0) {
            c = i;
            break;
        }     
    }
    if(c!=1) {
            printf("0");
        } else {
            printf("1");
        }
}