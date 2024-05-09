#include<stdio.h>
#include<math.h>

int main () {
    double be,dientich,luongmua;
    scanf("%lf%lf%lf",&be,&dientich,&luongmua);
    double hungmua=dientich*(luongmua/1000);
    if(hungmua>be) {
        printf("%.2lf",be);
    } else {printf("%.2lf",hungmua);
    }
}