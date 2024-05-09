#include<stdio.h>
#include<math.h>

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main () {
    int a,b;
    scanf("%d%d",&a,&b);
    if((nt(a) == 0 || nt(b) == 0)) {
        printf("0");
    } else {
        printf("1");
    }

}