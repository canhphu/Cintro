#include<stdio.h>
#include<string.h>
int main () {
    char a[1000001];
    int d[1000001]={0};
    scanf("%s",&a);
    for(int i = 0; i<=strlen(a); i++) {
        if (a[i]=='[') {
            for (int j=i;j<=strlen(a)){
                if (a[j]==']' || d[j]!=0) {
                    d[j]=1; n=j-i+1;
                    break;
                }
            }
    }
}
}