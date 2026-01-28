#include<stdio.h>
#include"rem.h"

int rem(int a, int b)
{
	if(a==0||b==0)
	{
		printf("Divide with 0 is not allowed");
		return error;
	}
	if(a<b)
	{
		printf("Number %d is not divisible with %d.",b,a);
		return error;
	}
	return a%b;
}
