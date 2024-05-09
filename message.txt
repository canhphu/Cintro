#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct kho{
	char ma[10];
	int sl;
	int gia;
};
int n;
struct kho a[100001];

void addProcess(){
	char code[10];
	int num;
	scanf("%s%d",code,&num);
	int found = 0;
	for(int i=0;i<n;i++){
		if(strcmp(code,a[i].ma)==0){
			a[i].sl+=num;
			printf("%d %d\n",a[i].sl,a[i].gia);
			found = 1;
			break;
		}
	}
	if(!found){
		a[n].sl = num;
		a[n].gia = -1;
		strcpy(a[n].ma,code);
		printf("%d %d\n",a[n].sl,a[n].gia);
		++n;
	}
}

void updateProcess(){
	char code[10];
	int gia;
	scanf("%s%d",code,&gia);
	int found = 0;
	for(int i=0;i<n;i++){
		if(strcmp(code,a[i].ma)==0){
			printf("%d %d\n",a[i].gia,gia);
			a[i].gia = gia;
			found = 1;
			break;
		}
	}
	if(!found) printf("San pham khong ton tai\n");
}

void deleteProcess(){
	char code[10];
	scanf("%s",code);
	int found = 0;
	for(int i=0;i<n;i++){
		if(strcmp(code,a[i].ma)==0){
			for(int j=i;j<n;j++){
				strcpy(a[j].ma,a[j+1].ma);
				a[j].gia = a[j+1].gia;
				a[j].sl = a[j+1].sl;
			}
			n--;
			printf("Da xoa san pham\n");
			found = 1;
			break;
		}
	}
	if(!found) printf("San pham khong ton tai\n");
}

void checkProcess(){
	char ma[10];
	scanf("%s",ma);
	int found = 0;
	for(int i=0;i<n;i++){
		if(strcmp(ma,a[i].ma)==0){
			printf("%d %d\n",a[i].sl,a[i].gia);
			found = 1;
			break;
		}
	}
	if(!found) printf("San pham khong ton tai\n");
}

void orderProcess(){
	char ma[10];
	int num;
	scanf("%s%d",ma,&num);	
	int found = 0;
	int sum = 0;
	for(int i=0;i<n;i++){
		if(strcmp(ma,a[i].ma)==0){
			if(a[i].sl<num) printf("Khong du so luong\n");
			else if(a[i].gia<0) printf("Khong the dat hang san pham chua co gia\n");
			else{
				a[i].sl-=num;
				sum = a[i].gia * num;
				printf("Da dat hang %d %d\n",a[i].sl,sum);
			}
			found = 1;
			break;
		}
	}
	if(!found) printf("San pham khong ton tai\n");
}

void main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s%d%d",a[i].ma,&a[i].sl,&a[i].gia);
	}
	getchar();
	
	int m; scanf("%d",&m);
	for(int i=0;i<m;i++){
		char cmd[256];
		scanf("%s",cmd);
		if(strcmp(cmd,"add")==0) addProcess();
		else if(strcmp(cmd,"update")==0) updateProcess();
		else if(strcmp(cmd,"delete")==0) deleteProcess();
		else if(strcmp(cmd,"check")==0) checkProcess();
		else if(strcmp(cmd,"order")==0) orderProcess();
	}
}