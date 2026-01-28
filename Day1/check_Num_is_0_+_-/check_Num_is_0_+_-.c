#include<stdio.h>
#include"npz.h"

int main()
{
	int num;
	printf("Enter a number To check number is Positive, Negative or Zero ");
	scanf("%d",&num);
	if(num==0)
	{
		printf("Enter Number is Zero\n");
			return 0;
	}
	int result = check_npz(num);
	printf("Enter number %d is %s\n",num,result==0?"POSITIVE":"NEGATIVE");
}
