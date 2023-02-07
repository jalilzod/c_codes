#include <stdio.h>
#include <time.h>
void put_date(const struct tm *timer)
{
	const char* wday_name[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
	printf("%4d Year %02dMonth %02dDay (%s) %02dh:%02dm:%02ds",
		timer->tm_year + 1900,
		timer->tm_mon + 1,
		timer->tm_mday,
		wday_name[timer->tm_wday],
		timer->tm_hour,
		timer->tm_min,
		timer->tm_sec
	);
}

int main(void)
{
	time_t current;
	struct tm* timer;
	time(&current);
	timer = localtime(&current);

	printf("The current date and time is ");
	put_date(timer);
	printf(" \n");

	return 0;
}
