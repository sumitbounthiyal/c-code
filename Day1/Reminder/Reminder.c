#include<stdio.h>
#include"rem.h"

int main()
{
int num1,num2;
printf("Enter the Two number to find the number\nEnter first number = ");
scanf("%d",&num1);
printf("Enter second number = ");
scanf("%d",&num2);
int result = rem(num1,num2);
if(result>=0)
printf("Reminder of number%d and %d is %d",num1,num2,result);
}


