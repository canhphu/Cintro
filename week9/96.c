#include<stdio.h>
#include<math.h>

float celcius(float i) {
    float c = (5/9)*(i-32);
    return c;
}

int main () {
    float i;
    for (i = 0; i<=20; i++) {
        printf("%.0f\t%.1f\n",i,celcius(i));
    }
}