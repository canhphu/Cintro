#include<stdio.h>
#include<math.h>
void daochiso(int a[],int n) {
    for(int i=0;i<(n/2);i++) {
        for(int j=n-1;j<n/2;j--) {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
void daotro(int *b, int n) {
    for(int i=0;i<(n/2);i++) {
        for(int j=n-1;j<n/2;j--) {
            int temp=*(b+i);
            *(b+i)=*(b+j);
            *(b+j)=temp;
        }
    }
}
int main () {  
    int a[100];
    int n;
    scanf("%d",&n);
    printf("Mang a: ");
    for(int i = 0; i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("\nMang b: ");
    int b[100];
    for(int i=0;i<n;i++) {
        scanf("%d",&b[i]);
    }
    daochiso(a,n);
    printf("Mang cua a la: ");
    for(int i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
    daotro(&b,n);
    printf("\nMang cua b la: ");
    for(int i=0;i<n;i++) {
        printf("%d ",b[i]);
    }

}