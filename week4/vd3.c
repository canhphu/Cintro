#include<stdio.h>
#include<math.h>

int main() {
    int month1, day1, year1, month2, day2, year2;

    printf("Enter a date in the form mm:dd:yy: ");
    scanf("%d%*c%d%*c%d", &month1, &day1, &year1);
    printf("month = %d day = %d year %d\n\n", month1, day1, year1);
    printf("Enter a date in the form mm:dd:yy; ");
    scanf("%d%*c%d%*c%d", &month2, &day2, &year2);
    printf("month = %d day = %d year %d\n", month2, day2, year2);
    int giay = year2 - year1;
    int phut = day2 - day1;
    int gio = month2 - month1;
    printf("Khoang cach giua 2 khoang thoi gian la: %d", abs(gio * 3600 + phut * 60 + giay));
    return 0;
}