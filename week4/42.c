#include<stdio.h>
#include<limits.h>

void main () {
    int j;
    long int k;
    float x;
    double z;

    printf("Enter an integer (between %i and %i): ", INT_MIN, INT_MAX);
    scanf("%i",&j);
    printf("You entered %d\n\n",j);

    printf("Enter a long integer (betwwen %ld and %ld): , LONG_MIN, LONG_MAX");
}