#include <stdio.h>

typedef enum {SUN = 1,MON,TUE, WED,THU,FRI, SAT} DayOfWeek;


DayOfWeek findDayOfWeek(int day, int month) {
	int dayinmonth[] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
	int alldays = 366 ,days = 0 , i = 0;
	for(i = 1 ; i <= month ; i++ ){
		days += dayinmonth[i] ;
	}
	days -= dayinmonth[i-1] ;
	return (days + day)%7 ;
}

int main()
{
	int day, month;
	DayOfWeek dow;

	printf("Day:1 Month:1 of Year 2004 is Thursday.\n");
	printf("Enter Day and Month: ");
	scanf("%d %d", &day, &month);
	dow = findDayOfWeek(day, month);
	printf("Day:%d Month:%d of Year 2004 is ", day, month);
	switch(dow){
		case 4:  printf("Sunday.\n"); break;
		case 5:  printf("Monday.\n"); break;
		case 6:  printf("Tuesday.\n"); break;
		case 7:  printf("Wednesday.\n"); break;
		case 1:  printf("Thursday.\n"); break;
		case 2:  printf("Friday.\n"); break;
		case 3:  printf("Saturday.\n"); break;
	}
}