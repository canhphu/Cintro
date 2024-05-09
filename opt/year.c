#include<stdio.h>

int main () {
    int y,m,d;
    char date[11];
    fgets(date,11,stdin);
    if (date[4] != '-' || date[7] != '-' || date[9] < '0' || date[9] > '9') {
        printf("INCORRECT");
    } else {
        y = (date[0]-48)*1000 + (date[1]-48)*100 + (date[2]-48)*10 + date[3]-48;
        m = (date[5]-48)*10 + date[6]-48;
        d = (date[8]-48)*10 + date[9]-48;
        if ( m < 0 || m > 12 || d > 31 || d < 0){
            printf("INCORRECT");
        } else
        printf("%d %d %d",y,m,d);
    }
    return 0;
    
}