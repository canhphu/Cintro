#include<stdio.h>
int main()
{
	int day, wly, ovnt, thrd, i;
	char *week[]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	printf("Type the day of the week that you want to rent DVD,(Eg:0=Monday, 1=Tuesday...): ");
	scanf("%d",&i); 
	printf("Input the amount of days that you want to rent the DVD: ");
	scanf("%d",&day);
	while (day > 7 ) {
		wly = day/7;
		day %= 7;
		i+= day;
		if (i > 6 ) { i-= 7; }
	
	}
    if (day >= 3 ) {
    	thrd = day/3;
    	ovnt = day%3;
	} else { ovnt = day;}
	printf("The amount of money that you have to pay is: %d$\n", 7*ovnt + 5*thrd + 3*wly)	;
	printf("The day that you have to return the DVD is %s",week[i]);
}
