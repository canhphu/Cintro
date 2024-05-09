#include<stdio.h>

int main() {
    int a;
    int b;
    int sum;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    sum = a + b;
    printf("Sum of the two number is: %d\n." , sum);
    return 0;
}