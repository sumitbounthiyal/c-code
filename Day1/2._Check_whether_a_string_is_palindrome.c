#include<stdio.h>
#include<string.h>


#define true 1
#define false 0

int user_pallandrome(char*p);

int main()
{
char arr[20];
int result;
printf("Enter string. Words less then 20 \n");
scanf("%s",arr);

//Function call
result = user_pallandrome(arr);

if(result == true)
	printf("Yes its a Pallandrome \n");
else
	printf("No its not a Pallandrome \n");

	return 0;
}

int user_pallandrome( char*p)
{
	int back = strlen(p);
	back-=1;
	int front=0;
	while(front<back)
	{
		if(p[back]!=p[front])
		{
			return false;
		}
		back--;
		front++;
	}
	return true;
}
