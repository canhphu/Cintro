#include<stdio.h>
#include<string.h>
int main() {
    char is[20];
    char name[30];
    int q;
    float p,m,t;
    printf("Enter the ISBN code of the book: ");
    fgets(is,20,stdin);
    printf("Enter the name of the book: ");
    fgets(name,30,stdin);
    printf("Enter the quantity: ");
    scanf("%d",&q);
    printf("Enter the price of the book in $: ");
    scanf("%f",&p);
    t = p*q;
    is[strlen(is)-1]=0;
    name[strlen(name)-1]=0;
	printf("BK Bookstore\n\n");
    printf("%-5s%-20s%-30s%10s%10s\n","Qty","ISBN","Tilte","Price","Total");
    printf("------------------------------------------------------------------------------------\n");
    printf("%-5d%-20s%-30s%10g%10g\n",q,is,name,p,t);
    printf("Vat: 4% \n");
    printf("You pay: %.2f", 0.04 * t + t);
    return 0;
}
