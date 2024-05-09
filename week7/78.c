#include<stdio.h>

int main () {
#define CBEGIN 10 
#define CLIMIT -5 
#define CSTEP 5
for (int i = CBEGIN; i>=CLIMIT; i = i - CSTEP) {
    printf("%.2f\n",1.8*i*32.0);
}
}