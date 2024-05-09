#include<stdio.h>
int main () {
    int x=1,y=2,z=3;
    int* p;
    int* q;
    int* r;
    p=&x;
    q=&y;
    r=&z;
    printf("Gia tri cua x,y,z la: %d %d %d\n",x,y,z);
    printf("Gia tri cua p,q,r la: %d %d %d\n",p,q,r);
    printf("Gia tri cua *p,*q,*r la: %d %d %d\n",*p,*q,*r);
    int temp;
    temp=x;
    x=y;
    y=z;
    z=temp;
    printf("Gia tri cua x,y,z sau khi doi la: %d %d %d\n",x,y,z);
    printf("Gia tri cua p,q,r sau khi doi la: %d %d %d\n",p,q,r);
    printf("Gia tri cua *p,*q,*r sau khi doi la: %d %d %d\n",*p,*q,*r);
    int temp2;
    temp2=*p;
    *p=*q;
    *q=*r;
    *r=temp;
    printf("Gia tri cua x,y,z sau khi doi lan 2la: %d %d %d\n",x,y,z);
    printf("Gia tri cua p,q,r sau khi doi lan 2 la: %d %d %d\n",p,q,r);
    printf("Gia tri cua *p,*q,*r sau khi doi lan 2 la: %d %d %d",*p,*q,*r);
}