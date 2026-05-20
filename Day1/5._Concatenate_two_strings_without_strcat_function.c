#include<stdio.h>
#include<string.h>

void user_strcat(char*source, char* destination);

int main()
{
char source[40];
char destination[20];

printf("Enter string first. Words less then 20 \n");
scanf("%s",source);
printf("Enter string second. Words less then 20 \n");
scanf("%s",destination);

//Function call
user_strcat(source,destination);

	printf("Joined string is %s \n",source);

	return 0;
}

void user_strcat(char*source, char* destination)
{
	int back = strlen(source);
	back-=1;
	int front=0;
	while(destination[front]!='\0')
	{
		source[back] = destination[front];
		back++;
		front++;
	}
	source[back] = '\0';
}
