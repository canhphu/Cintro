#include<stdio.h>
    int b[3];

void getJudgedata() {
    int a[5];
    for (int i = 0;i<5;i++) {
        scanf("%d",&a[i]);
    }
    int temp;
    for (int i = 0; i<5;i++) {
        for (int j = i+1;j<5;j++) {
            if(a[i]>a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i<3; i++) {
        b[i]=a[i+1];
    }
}
void calcScore() {
    int tong = 0;
    for (int i = 0; i<3; i++) {
        tong = tong + b[i];
    }
    printf("%1d",tong/3);
}
int main () {
    getJudgedata();
    calcScore();

}  