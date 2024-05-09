#include<stdio.h>
#include<string.h>

int main () {
    char a[1000000];
    scanf("%s",&a);
    for(int i = 0; i<=strlen(a);i++) {
        if(a[i]==a[i+1]-1 || a[i]==a[i+1]-2 || a[i]==a[i+3]-1 || a[i]==a[i+3]-2) {
            printf("1");
            break;
        } else {
            printf("0");
        break;
        }
    }
}