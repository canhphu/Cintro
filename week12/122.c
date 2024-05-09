#include<stdio.h>

double* maximum(double* a, int size) {
     double *max=a;
    for(int i=0;i<size;i++) {
        if(*(a+i)>*max) {
            max=(a+i);
        }
    }
    return max;
}

int main () {
    int size;
    double *a;
    scanf("%d",&size);
    if(size==0) {
        return 0;
    } else {
    for(int i=0;i<size;i++) {
        scanf("%lf",a+i);
    }
    }
    printf("%lf",*maximum(a,size));
    
}