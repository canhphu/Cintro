#include<stdio.h>
#include<math.h>

int main() {
    int h1,m1,s1,h2,m2,s2;
    scanf("%d%*c%d%*c%d\n", &h1, &m1, &s1);
    scanf("%d%*c%d%*c%d", &h2, &m2, &s2);
    if(0>h1 || 0>h2 || h1>=24 || h2>=24 || m1<0 || m2<0 || m1>=60 || m2>=60 || s1<0 || s2 < 0 || s1>=60 || s2>=60) {
    printf("00:00:00");
    } else {
    int giay = s2-s1;
    int phut = m2 - m1;
    int gio = h2 - h1;
    if (gio < 0) {
        printf("1");
    } else if ( gio > 0) {
        printf("-1");
    } else if ( gio == 0) {
        if ( phut < 0) {
            printf("1");
        } else if (phut > 0) {
            printf("-1");
        } else if (phut == 0) {
            if (giay < 0) {
                printf("1");
            } else if ( giay > 0) {
                printf("-1");
            } else {
                printf("0");
            }
        }
    }
    }
    
}