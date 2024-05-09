#include<stdio.h>

void printnchars(char ch, int n) {
    for (int i = 0; i<n;i++) {
        printf("%c",ch);
    }
}
int main () {
     int n;
     scanf("%d",&n);
     for (int i = 1; i<=n; i++) {
        printnchars('*',i);
        printf("\n");
     }
}
