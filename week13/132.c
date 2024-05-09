#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define max 100
char *s;
char *a;
char *b;
void nhap(char *s, char *a, char *b) {
    fgets(s,max,stdin);
    scanf("%s%s",&a,&b);
}

void change(char *s,char *a,char *b) {
    for(int i=0;i<strlen(s);i++) {
        if(*(s+i)==*a) {
            *(s+i)=*b;
        }
    }
}

int main () {
    
    nhap(s,a,b);
    change(s,a,b);
    printf("%s",s);
}