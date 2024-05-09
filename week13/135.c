#include<stdio.h>
#include<string.h>
#define max 100
int main () {
    char a[max];
    int i,j;
    char b[max];
    fgets(a,max,stdin);
    i=strlen(a);j=0;
       while(a[i]!=' ') {
        b[j]=a[i];
        j++;
        i--;
       }
    int count =j;
    for(j=count-1;j>=0;j--) {
        printf("%c",b[j]);
    }
}
