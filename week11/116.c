#include<stdio.h>
void incomeplus(long *current, int year) {
    if(year>3) {
        *current=*current+300000;
    }
}
int main () {
    long current;
    int year;
    scanf("%ld%d",&current,&year);
    incomeplus(&current,year);
    printf("%ld",current);
}