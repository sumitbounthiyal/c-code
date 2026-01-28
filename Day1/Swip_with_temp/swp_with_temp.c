#include<stdio.h>
#include"Swipe.h"

int main()
{
int a,b;
printf("Enter the Number two swipe\n");
printf("Enter the number1 = ");
scanf("%d",&a);
printf("Enter the number2 = ");
scanf("%d",&b);
printf("Numbers without swipe is a=%d and b=%d\n",a,b);
swipe(&a,&b);
printf("Numbers without swipe is a=%d and b=%d\n",a,b);
}
