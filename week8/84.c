#include <stdio.h> 
int main(void) 
{ 
double total_pay; /* lương của công ty*/ 
int count_emp; /* nhân viên hiện tại */ 
int number_emp; /* số nhân viên */ 
double hours; /* số giờ đã làm việc */ 
double rate; /* lương theo giờ */ 
double pay; /* lương trả cho thời gian làm việc */ 
/* Nhập số nhân viên. */ 
printf("Enter number of employees> "); 
scanf("%d", &number_emp); 
/* Tính lương từng nhân viên và cộng vào tổng lương phải trả. */ 
total_pay = 0.0; 
count_emp = 0; 
while (count_emp < number_emp) { 
printf("Hours> "); 
scanf("%lf", &hours); 
printf("Rate > $"); 
scanf("%lf", &rate); 
pay = hours * rate; 
printf("Pay is $%6.2f\n\n", pay); 
total_pay = total_pay + pay; 
count_emp = count_emp + 1; 
} 
printf("All employees processed\n"); 
printf("Total payroll is $%8.2f\n", total_pay); 
return (0); 
}