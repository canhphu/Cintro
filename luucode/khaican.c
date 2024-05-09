#include<stdio.h>

int can(int x) {
    int i;
    for (i=1;i<x;i++) {
        if(i*i==x) {
            return i;
        } 
    }
    for(i=1;i<x;i++) {
        int a=0.5*(i+x/i);
        if(a==i) {
            return i;
        } else {
    
        }
        }
    
}

int main () {
    int x;
    scanf("%d",&x);
    printf("%d",can(x));
}