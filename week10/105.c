#include<stdio.h>

int sokhong(int n, int a[]) {
    int count = 0;
    for(int i = 0; i<n ;i++) {
        if(a[i]==0) {
            count++;
        }
    }
    return count;
}

int length (int n, int a[]) {
    int max=0;   //do dai lon nhat
    int temp=0;    // thiet lap gia tri do dai ban dau
    for(int i=0;i<n;i++) {
        if(a[i]==0)  //neu a[i]=0, gia tri do dai tang
            temp++;
        if(a[i]!=0) {
            if(temp>max) { 
                max=temp; //khi gia tri a[i] khac 0, gan gia tri temp vao max
                temp=0;     // tra ve gia tri temp=0
            }
        }
    } // tiep tuc vong lap sinh ra nhieu gia tri temp khac nhau
    if(temp>max) 
        max=temp; // loc ra gia tri temp lon nhat va gan vao bien max
    return max;
}

void swap(int i, int j, int a[]) {
    int temp;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

int main () {
    int n,i,j;
    int dem;
    int a[100];
    scanf("%d",&n);
    for(int i = 0; i<n; i++) {
        scanf("%d",&a[i]);
    }
     printf("so lan so 0 xuat hien la: %d\n",sokhong(n,a));
    printf("do dai day con so 0 lon nhat la: %d\n",length(n,a));
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]>a[j]) {
                swap(i,j,a); //thuat toan sap xep tang dan cac so
            }
        }
    }
    i=0;j=0;dem=0;
    while(i<n) {    
        dem=0;
        j=i;
        while(a[i]==a[j]) {
           dem++;       //dem tan so xuat hien cua tung so thoi
            j++; 
        } 
        printf("%d xuat hien %d lan\n",a[i],dem);
        i=j;
    }
   
}