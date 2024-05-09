#include<stdio.h>
#include<string.h>

int main () {
    char pn[11];
    char cp[3];
    fgets(pn,11,stdin);
    for (int i = 0; i<2; i++) {
        if (pn[0] == '8' && pn[1] == '4') {
                pn[0] = '0';
                pn[1] = pn[2];
                pn[2] = pn[3];

        }
    }
    strncpy(cp,pn,3);
    cp[3]='\0';
    if (strcmp(cp,"088")==0 || strcmp(cp,"091")==0 || strcmp(cp,"094")==0 || strcmp(cp,"081")==0 || strcmp(cp,"082")==0 || strcmp(cp,"083")==0 || 
    strcmp(cp,"084")==0 || strcmp(cp,"085")==0 ) {
        printf("Vinaphone");
    }
    if (strcmp(cp,"096")==0 || strcmp(cp,"097")==0 || strcmp(cp,"098")==0 || strcmp(cp,"032")==0 || strcmp(cp,"033")==0 || strcmp(cp,"034")==0 || 
    strcmp(cp,"035")==0 || strcmp(cp,"036")==0 || strcmp(cp,"037")==0 || strcmp(cp,"038")==0 || strcmp(cp,"039")==0 || strcmp(cp,"086")==0) {
        printf("Viettel");
    } if (strcmp(cp,"090")==0 || strcmp(cp,"093")==0 || strcmp(cp,"089")==0 || strcmp(cp,"070")==0 || strcmp(cp,"076")==0 || strcmp(cp,"077")==0 || 
    strcmp(cp,"078")==0 || strcmp(cp,"079")==0) {
        printf("Mobiphone");
    } if (strcmp(cp,"092")==0 || strcmp(cp,"056")==0 ||strcmp(cp,"058")==0 ) {
        printf("Vietnamobile");
    } if (strcmp(cp,"099")==0 || strcmp(cp,"019")==0 ) {
        printf("ITelecom");
    } if (strcmp(cp,"055")==0) {
        printf("Wintel");
    }
   
 }


