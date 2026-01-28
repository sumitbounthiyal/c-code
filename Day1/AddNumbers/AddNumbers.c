#include<stdio.h>
#include "Add.h"
int main()
{
char buffer[100];
printf("Enter the Numbers to add");
fgets(buffer, sizeof(buffer),stdin);
int result = add(buffer);
printf("Sum of the given output is %d\n",result);
}

