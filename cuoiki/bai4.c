#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct banggia {
    int ma[6];
    int gia;
}menu;


int main () {
    menu a;
    int i,n,m;
    while(a.ma[i]!=-1) {
        for(int i =0; i<5; i++) {
            scanf("%d",&a.ma[i]);
        }
        scanf("%d",&a.gia);
    }
    scanf("%d",&n);
    while(n>0) {
        for(i=0; i<5;i++) {
            scanf("%d",&a.ma[i]);
        }
        scanf("%d",&m);
        n--;
    }
    
}