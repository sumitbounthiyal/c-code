#include<stdio.h>
#include"largestnum.h"

int main()
{
	int num1, num2;
	printf("Enter a numbers To check which is greater\n");
	printf("Enter the num1 = ");
	scanf("%d",&num1);
	printf("Enter the num2 = ");
	scanf("%d",&num2);
	check_largest(&num1,&num2);
	printf("Enter number %d is greater then %d\n",num1,num2);
}
