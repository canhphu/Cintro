#include<stdio.h>
#include<math.h>

int is_prime(int n) {
    for (int i = 2; i<= sqrt(n); i++) {
        if(n%i==0) {
            return 0;
        } 
    }
    return 1;
}

int main () {
    int n;
    scanf("%d",&n);
    for(int i = 2; i<=n; i++) {
        if(is_prime(i)==1) 
         printf("%d ",i);
} 
 }
   