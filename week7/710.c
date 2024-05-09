#include<stdio.h>
#include<math.h>
#include<limits.h>

int kt(int n) {
    int tong = 0;
    int i;
    for (i = 1; i<=n/2; i++) {
        if ( n % i == 0) {
            tong=tong+i;
        }
       
    }
     if (tong == n) return 0; else return 1;

}
int main () {
    int n;
    scanf("%d",&n);
    for (int i = 1; i<=n; i++) {
        if(kt(i)==0) {
            printf("%d\n",i);
        } 
    }
}
