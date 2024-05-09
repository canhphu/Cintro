#include<stdio.h>

int main() {
    double overnight;
    double threeday;
    double weekly;

    overnight = 7.00;
    threeday = 5.00;
    weekly = 3.00;

    printf("On Monday, the number of disk sold is: \n");
    int a;
    printf("Overnight: ");
    scanf("%d", &a);
    int b;
    printf("Threeday: ");
    scanf("%d", &b);
    int c;
    printf("Weekly: ");
    scanf("%d", &c);
    double sum = (overnight * a) + (threeday * b) + (weekly * c);
    printf("The total money from selling the disk is: %4f", sum);
    return 0;
}