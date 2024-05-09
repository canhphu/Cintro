#include<stdio.h>

int kt(int a[], int b[], int sizea, int sizeb) {
    int i,j;
    if(sizea!=sizeb) {
        return 0;
    } else {
    for(i = 0,j=0; i<sizea && j<sizeb; i++,j++) {
        if(a[i]!=b[j]) {
            return 0;
        } else {
            return 1;
        }
    }
}
}

int main () {
    int a[100],b[100],sizea,sizeb;
    scanf("%d%d",&sizea,&sizeb);
    for(int i = 0; i<sizea; i++) {
        scanf("%d",&a[i]);
    }
    for(int j=0; j<sizeb;j++) {
        scanf("%d",&b[j]);
    }
    printf("%d",kt(a,b,sizea,sizeb));
}