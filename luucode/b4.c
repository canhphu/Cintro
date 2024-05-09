#include <stdio.h> 
int kt(long int x){
    int t;
    if (x<10000000000)  t=x/10000000;
    else {x=x-84000000000; t=x/10000000;}
    return t;
}
int main(){
    long int x;
    scanf("%ld",&x);
    int t=kt(x);
    if (t==96 || t==97 || t==98 || t==86 || t==32 || t==33 ||t==34 || t==35 || t==36 || t==37 || t==38 || t==39) printf("1\n"); else printf("0\n");
}
