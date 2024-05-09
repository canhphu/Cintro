#include <stdio.h>

void sort(int a[],int n) {
    int temp;
    for(int i = 0; i<n-1; i++) {
        for(int j = i+1; j<n;j++) {
            if(a[i]<a[j]) {
                temp=a[i];
                a[i]=a[j];                  //thuat toan sap xep giam dan
                a[j]=temp;
            } 
        }
    }
}

void odd(int a[], int n) {
    int temp;
    for(int i = 0; i<n-1; i++) {
        for(int j = i+1;j<n;j++) {
            if((a[i]<a[j])&&(a[i]%2!=0)&&(a[j]%2!=0)) {   // dieu kien doi: 1. phai la so le, 2. a[j] phai lon hon a[i] 
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main () {
    int n;
    int a[100];
    scanf("%d",&n);
    for(int i = 0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    odd(a,n);
    for(int i = 0; i<n;i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
    sort(a,n);
    for(int i = 0; i<n; i++) {
        printf("%d ",a[i]);
    }
    
}
