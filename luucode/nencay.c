#include<stdio.h>
#include<string.h>

int main() {
    int i,j,ver,edg,minimum,p;
    printf("Enter n: ");
    scanf("%d", &ver);
    edg = ver-1;
    int EDG[edg][2];
    int DG[ver+1];
    memset(DG, 0, ver*sizeof(int));
    printf("This tree has %d edges for %d vertexes.\n",edg,ver);
    printf("There are %d pairs of vertexes in the three.\n",edg);
    for( i = 0; i<edg; i++) {
        scanf("%d", &EDG[i][0]);
        scanf("%d", &EDG[i][1]);
        DG[EDG[i][0]]++;
        DG[EDG[i][1]]++;
    }
    printf("\nThe Prufer code for the tree is: ");
    for (i = 0; i < ver-2;i++) {
        minimum = 10000;
        for (j=0; j<edg; j++) {
            if(DG[EDG[j][0]] == 1) {
                if(minimum > EDG[j][0] && EDG[j][0]>0) {
                    minimum = EDG[j][0];
                    p=j;
                }
            }
        if(DG[EDG[j][1]] == 1) {
            if(minimum > EDG[j][1] && EDG[j][1]>0) {
                minimum = EDG[j][1];
                p = j;
            }
        }
      }
    DG[EDG[p][0]]--;
    DG[EDG[p][1]]--;
    if(DG[EDG[p][0]] == 0) {
        printf("%d",EDG[p][1]);
    } else {
        printf("%d",EDG[p][0]);
    }
    }
    return 0;
}