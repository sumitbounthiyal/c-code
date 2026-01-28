#include<stdio.h>
#include"oddeven.h"

int main()
{
int num;
printf("Enter the number to check number is Odd Or Even");
scanf("%d",&num);
int result = odd_even(num);
printf("Number %d is %s",num,result==0?"EVEN":"ODD");
}
