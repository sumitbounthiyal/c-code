#include<stdio.h>
#include"leapyear.h"

int check_leap(int year)
{
	int result = year%400;
	if(result==100||result==200||result==300)
	{
		return NOT_LEAP_YEAR;
	}
	

	if(year%4==0)
	{
		return LEAP_YEAR;
	}
	else
	{
		return NOT_LEAP_YEAR;
	}
}
