#include<stdio.h>

int main () {
    int a,b,i;
    scanf("%d%d",&a,&b);
    for (int i = a+b; i > 0; --i) { //chay nguoc tu a+b ve 1
        if ( a % i == 0 && b % i == 0) {
            printf("%d",i);
            break; //sau khi xuat hien 1 so thi lap tuc dung vong lap
        }
    }
   
}