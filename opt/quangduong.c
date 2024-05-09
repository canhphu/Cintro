#include<stdio.h>

void nhap(int a[]) {
    for (int i = 0; i<6; i++) {
        scanf("%d", &a[i]);
    }
}

int max(int a[])
{
    int max = a[0];
    for (int i = 1; i < 6; i++)
        if (max < a[i])
            max = a[i];
    return max;
}
 
int min(int a[])
{
    int min = a[0];
    for (int i = 1; i < 6; i++)
        if (min > a[i])
            min = a[i];
    return min;
}

int tong(int a[]) {
    int t;
    for (int i = 0; i<5; i++) {
        for (int j = i+1; j<6; j++) {
            if(a[i]>a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    int tong = 0;
    for (int i = 0; i<=3; i++) {
        tong += a[i];
    }
    return tong;
}
int main()
{
    int a[6];
    nhap(a);
    printf("%d ", min(a));
    printf("%d ", max(a));
    printf("%d",tong(a));
    return 0;
}