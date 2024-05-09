#include<stdio.h>

int main () {
   int count=0;
   for(int i =1; i<=1000;i++) {
      if(i%3==0||i%11==0) {
         count++;
      }
   }
   printf("%d",count);
}