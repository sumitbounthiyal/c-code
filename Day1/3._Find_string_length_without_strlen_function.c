#include<stdio.h>
#include<string.h>


#define true 1
#define false 0

int user_strlen(char*p);

int main()
{
char arr[20];
int result;
printf("Enter string. Words less then 20 \n");
scanf("%s",arr);

//Function call
result = user_strlen(arr);
printf("The length of string is %d \n",result);

return 0;
}

int user_strlen( char*p)
{
	int count = 0;
	while(p[count]!='\0')
	{
		count++;
	}
	return count;
}
