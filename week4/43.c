#include<stdio.h>

int main () {
    char s[30];
    scanf("%[^\n]s", &s);
    printf("Day la xau: %s", s);
    return 0;
}