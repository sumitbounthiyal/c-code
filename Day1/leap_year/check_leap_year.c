#include<stdio.h>
#include "leapyear.h"
int main()
{
	int year;

	printf("Enter year to check leap year or not?\n Enter number ");
	scanf("%d",&year);

	printf("The year %d is %s LEAP YEAR", year, check_leap(year)==1?"a":"not a");

}
