#include <stdio.h>

typedef enum {SUN = 1,MON,TUE, WED,THU,FRI, SAT} DayOfWeek;


DayOfWeek findDayOfWeek(int day, int month) {
	int dayinmonth[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int alldays = 365 ,days = 0 , i = 0;
	for(i = 1 ; i <= month ; i++ ){
		days += dayinmonth[i] ;
	}
	days -= dayinmonth[i-1] ;
	if((days + day)%7 == 0) return 7 ;
	return (days + day)%7 ;
}

int main()
{
	int day, month;
	DayOfWeek dow;

	printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
	printf("Enter Day and Month: ");
	scanf("%d %d", &day, &month);
	dow = findDayOfWeek(day, month);
	printf("Day:%d Month:%d of Year 2013 is ", day, month);
	switch(dow){
		case 6:  printf("Sunday.\n"); break;
		case 7:  printf("Monday.\n"); break;
		case 1:  printf("Tuesday.\n"); break;
		case 2:  printf("Wednesday.\n"); break;
		case 3:  printf("Thursday.\n"); break;
		case 4:  printf("Friday.\n"); break;
		case 5:  printf("Saturday.\n"); break;
	}
}