#include<stdio.h>
#include<string.h>

int main () {
    int n;
    char ten[100][50];
    scanf("%d\n",&n);
    for(int i = 0; i<n; i++) {
        fgets(ten[i],sizeof(ten),stdin);
    }
    
    
}