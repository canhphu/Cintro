#include<stdio.h>
#include<math.h>

int main () {
    double a1,b1,c1,a2,b2,c2;
    scanf("%lf%lf%lf%lf%lf%lf",&a1,&a2,&b1,&b2,&c1,&c2);
    double dai1 = sqrt(pow(b1-a1,2)+pow(b2-a2,2));
    double dai2 = sqrt(pow(b1-c1,2)+pow(b2-c2,2));
    double dai3 = sqrt(pow(c1-a1,2)+pow(c2-a2,2));
    if ( dai1 + dai2 > dai3 && dai1 + dai3 > dai2 && dai2+dai3>dai1) {
        printf("1");
    } else {
        printf("0");
    }
}