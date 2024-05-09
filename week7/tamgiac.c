#include<stdio.h>

int main () {
    int i,j,n;
    scanf("%d",&n);
    while ( i <n ) {
        j=i;
        while(j>=0) {
            printf("*");
            j--;
        }
        printf("\n");
        i++;
    }
}