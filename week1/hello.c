#include <stdio.h>

int main() {
    int n,s,a;
   scanf("%d",&n);
   for (int i=0;i<n;i++)
   {
    s=n-1;
    a=i+1;printf("%d ",i+1);
    for (int j= 0; j < i; j++)
    {
        printf("%d ", a+s);
         a += s;
        s -= 1;
    }
    printf("\n");
   }
   return 0;
}