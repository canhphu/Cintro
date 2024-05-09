#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Create a new structure that combines the hang and donhang structures
struct newstruct {
    char ten[10];
    int kl;
    int soluong;
};

int icmp(const void *p1, const void *p2) {
    return *(const int*)p1-*(const int*)p2;
}

int main () {
    int n;
    scanf("%d",&n);
    struct newstruct newstruct[n]; // Declare an array of newstructs

    for(int i=0;i<n;i++) {
        scanf("%s%d",&newstruct[i].ten,&newstruct[i].kl); // Read in data for newstructs
    }

    int m;
    scanf("%d",&m);

    for(int j=0;j<m;j++) {
        int tien=0;
        int muc;
        scanf("%d",&muc); // Read in muc

        struct newstruct newstruct_tmp[muc]; // Declare a temporary array of newstructs

        for(int k=0;k<muc;k++) {
            scanf("%s%d",&newstruct_tmp[k].ten,&newstruct_tmp[k].soluong); // Read in data for temporary newstructs
        }

        // Sort the temporary array by the ten field using qsort
        qsort(newstruct_tmp, muc, sizeof(struct newstruct), icmp);

        // Iterate over the newstructs in the original array and find the corresponding temporary newstructs
        for(int i=0;i<n;i++) {
            for(int k=0;k<muc;k++) {
                if(strcmp(newstruct[i].ten, newstruct_tmp[k].ten) == 0) {
                    tien += (newstruct_tmp[k].soluong * newstruct[i].kl);
                    break;
                }
            }
        }
        printf("%d\n",tien);
    }
}