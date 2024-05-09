#include<stdio.h>
#include<string.h>

int main () {
    char a[11]="apple";
    char c[3];
    //scanf("%s",a);
    memcpy(c,a,3);
    printf("%s",c);
}    