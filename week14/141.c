#include<stdio.h>
#include<math.h>

typedef struct date {
    int day;
    int month;
    int year;
}date_t;

int kt(date_t a, date_t b) {
    if(a.day>31||a.day<0||b.day>31||b.day<0||a.month>12||b.month<0||a.month<0||b.month>12||a.year<0||b.year<0) {
        return -1;
    } else return 0;
}

int datecmp(date_t a, date_t b) {
    if(a.year>b.year) {
        return 1;
        } else if (a.year<b.year) {
            return -1;
        } else if(a.year=b.year) {
            if(a.month>b.month) {
                return 1;
            } else if(a.month<b.month) {
                return -1;
            } else if(a.month=b.month) {
                if(a.day>b.day) {
                     return 1;
                } else if(a.day<b.day) {
                   return -1;
                } else return 0;
            }
        }
    }

int main  () {
    date_t a;
    date_t b;
    re1:
    scanf("%d%*c%d%*c%d",&a.day,&a.month,&a.year);
    scanf("%d%*c%d%*c%d",&b.day,&b.month,&b.year);
    if(kt(a,b)==-1) {
        printf("Du lieu khong hop le, vui long nhap lai\n");
        goto re1;
    }
    if(datecmp(a,b)==1) {
        printf("%d/%d/%d la sau %d/%d/%d",a.day,a.month,a.year,b.day,b.month,b.year);
    } if(datecmp(a,b)==0) {
        printf("Hai ngay trung nhau");
    } if(datecmp(a,b)==-1) {
        printf("%d/%d/%d la truoc %d/%d/%d",a.day,a.month,a.year,b.day,b.month,b.year);
    }
}
