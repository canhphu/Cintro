#include<stdio.h>

int kt(int n) {
    int j;
    for (int i = n; i>=1; i--){
        j = i;
        while (j/10!=0) {
            if(j%10 ==1) {
                printf("%d ",i);
                return 1;
            } else j = j/10;
        }

    }
    
 }

int main () {
    int n;
    scanf("%d",&n);
    kt(n);
}