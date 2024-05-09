#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define max 100
void nhap(char *s) {
    fgets(s,max,stdin);
}

int khoangtrang(char *s) {
    int count =0;
    for(int i=0;i<strlen(s);i++) {
        if(*(s+i)==' ') {
            count++;
        }
    } 
    return count;
}

int main () {
    char *s;
    nhap(s); 
    printf("So khoang trang cua xau la: %d",khoangtrang(s));
}