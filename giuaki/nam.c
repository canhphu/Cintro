#include<stdio.h>

int main () {
    int y,m,d;
    char date[11];
    fgets(date,11,stdin);
    if (date[4] != '-' || date[7] != '-' || date[9] < '0' || date[9] > '9') {
        printf("0");
    } else {
        y = (date[0]-48)*1000 + (date[1]-48)*100 + (date[2]-48)*10 + date[3]-48;
        m = (date[5]-48)*10 + date[6]-48;
        d = (date[8]-48)*10 + date[9]-48;
        if ( m <= 0 || m > 12 || d > 31 || d <= 0){
            printf("0");
        } else
        if(m == 1 || m==3 || m==5|| m==7 || m==8 || m==10 || m==12) {
            if(d==31) {
                printf("1");
            }
        } else if (m==4 || m==6 || m==9 || m==11) {
            if (d==30) {
                printf("1");
            }
        } else if (m==2) {
            if (d < 30) {
                printf("0");
            }
        } else printf("1");
    }
    return 0;
    
}