#include<stdio.h>
#include<math.h>
#include<limits.h>
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main () {
    int n;
    scanf("%d",&n);
    for (int i = n+1; i<=INT_MAX; i++) {
        if((nt(i))) {
            printf("%d",i);break;
        }
    }
}