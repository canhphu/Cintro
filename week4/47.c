#include<stdio.h>
#include<wchar.h>
#include<locale.h>

int main () {
    int qty;
    int isbn;
    char title[127];
    int price;
    scanf("%d%d%s%d", &qty, &isbn, &title, &price);
    float total = price * qty;
    printf("BK Bookseller\n\n");
    printf("Qty\tISBN\tTitle\t\t\tPrice\tTotal\n");
    //printf("--------------------------------------------\n\n");
    printf("%c\n", 196);
    printf("%d\t%d\t%s\t\t\t5%d\t%.2f\n\n", qty,isbn,title,price,total);
    printf("Vat: 4% \n");
    printf("You pay: %.2f\n", 0.04 * total + total);
    return 0;
}