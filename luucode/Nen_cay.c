#include <stdio.h>
const int m=100000;
int main() {
    int n,i,j,d,min,o;
    int cay[m][2];
    int dem[m];
    for (i = 0;i <= n;i++) dem[i]=0;
    scanf("%d",&n);
    for (i = 0;i < n;i++) 
        scanf("%d %d",&cay[i][0],&cay[i][1]);	
	    for (i = 0;i < n;i++) 	
		dem[cay[i][0]]++;    
		for (i = 0;i < n;i++) 
		dem[cay[i][1]]++;
	for(i=0; i<n; i++) {
		printf("%d\n",dem[i]);
	} 	
    for (i = 0;i < n; i++){
    	min=n;
    	for (j = 1; j <= n;j++){
    		if (dem[j] <= min && dem[j] > 0) min=dem[j];}
		for (j = 1; j <= n;j++){
			if (dem[j]==min && dem[j]>0) {
				for (d = 0;d < n;d++){
				    if (cay[d][0]==j ) {
					dem[cay[d][1]]--;
					dem[cay[d][0]]--;
					if (dem[cay[d][0]]+ dem[cay[d][1]] >= 1) printf("%d ",cay[d][1]);
					break;
					}
					if (cay[d][1]==j ) {
					dem[cay[d][1]] -= 1;
					dem[cay[d][0]] -= 1;
					if (dem[cay[d][0]]+ dem[cay[d][1]] >= 1) printf("%d ",cay[d][0]);
					break;
					}
					
				}
				}
				
			}	
		
	}
}

