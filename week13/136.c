#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 100
int main () {
    char s[100];
    char t[100];
    fgets(s,max,stdin);
    fgets(t,max,stdin);
    for(int i=strlen(s)-1;i>=0;i++) {
        for(int j=0;j<strlen(t);j++) {
            if(s[i]!=t[j]) {
                printf("0");
                break;
            } else printf("1");
        }
    }
}