#include<stdio.h>

void user_strrev(char*p);

int main()
{
	char arr[20];
	printf("Please enter string less then 20 words \n");
	scanf("%s",arr);

	//print before reverse
	printf("Before reverse string is - %s \n",arr);
	
	//call reverse function
	user_strrev(arr);

	//print after reverse	
	printf("After reverse string is - %s \n",arr);
	
	return 0;
}

void user_strrev(char*p)
{
	int size = 0;
	//calculating string length
	while(p[size]!='\0')
	{
		size++;
	}
	int front = 0;
	int back = size-1;
	while(front<back)
	{
		char temp=p[front];
		p[front]=p[back];
		p[back]=temp;
		front++;
		back--;
	}
}
