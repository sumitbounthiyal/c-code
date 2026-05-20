#include<stdio.h>

void user_strcpy(char* source, char* destination);

int main()
{
char source[20];
char destination[20];

printf("Enter string. Words less then 20 \n");
scanf("%s",source);

//Function call
user_strcpy(source, destination);

	printf("Original string is %s \n",source);
	printf("Copy string is %s \n", destination);

	return 0;
}

void user_strcpy( char* p, char* q)
{
	int count = 0;
	while(p[count]!='\0')
	{
		q[count]=p[count];
		count++;
	}
	q[count]='\0';
}
