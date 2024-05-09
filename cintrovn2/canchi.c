#include<stdio.h>
#include<string.h>

char can(int n) {
    char can[10][4] = {"Giap","At","Binh","Dinh","Mau","Ky","Canh","Tan","Nham","Quy"};
    while (n>10) {
        n=n/10;
    }
    return can[n][4];
}

int main () {
    int n;
    scanf("%d",&n);
    for(int i = 0; i<=4;i++) {
        printf("%s",can(n));
    }
}
