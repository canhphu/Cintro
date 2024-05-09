#include<stdio.h>
int a[100];
void nhapmang() {
    for(int i = 0; i<100; i++) {
        scanf("%d",&a[i]);
    }
}

void sole() {
    int sum =0;
    for(int i = 0; i<100;i++) {
        if(a[i]%2!=0) {
            sum+=a[i];
        }
    }
    printf("%d\n",sum);
}

void min() {
    int temp;
    for(int i = 0; i<100; i++) {
        if(a[i]<temp) {
            temp=a[i];
        }
    }
    printf("%d",temp);
}

int main () {
    nhapmang();
    sole();
    min();
}