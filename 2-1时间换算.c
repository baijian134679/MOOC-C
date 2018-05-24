#include <stdio.h>

int main()
{
	int hour,minute;
	int time;
	scanf("%d",&time);
	hour=time/100-8;
	minute=time%100;
	
	if(hour==0)
	{
		if(minute>=0&&minute<10)
		{
			printf("%d",minute);
		}
	else
		{
			hour++;
			minute=minute%60;
		if(minute<10) 
			printf("%d0%d",hour,minute);
			else printf("%d%d",hour,minute);
		}
	}
	else if(hour<0)
	{
		hour+=24;
		if(minute>=0&&minute<10) 
			printf("%d0%d",hour,minute);
		else if(minute<60) 
			printf("%d%d",hour,minute);
		else
	{
		hour++;
		minute=minute%60;
		if(minute<10)
		printf("%d0%d",hour,minute);
		else printf("%d%d",hour,minute);
		}
		}
		else
		{
	if(minute>=0&&minute<10)
	{
		printf("%d0%d",hour,minute);
	}
	else if(minute<60) 
		printf("%d%d",hour,minute);
	else
	{
		hour++;
		minute=minute%60;
		if(minute<10)
		printf("%d0%d",hour,minute);
		else printf("%d%d",hour,minute);
	}
	}
return 0;
}
