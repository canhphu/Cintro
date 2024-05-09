#include<stdio.h>

int main() {
    int a;
    int b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    int sum;
    sum = (a+b)*(b-a+1)/2;
    printf("Accumulated sum: %d", sum);
    return 0;
}