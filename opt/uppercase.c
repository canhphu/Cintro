#include<stdio.h>

int main () {
    char c;
    scanf("%s",&c);
    while (c != '\0') {
        c=c-32;
        
    }
    printf("%s",c);
}