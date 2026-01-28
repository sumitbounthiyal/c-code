#include<stdio.h>
#include"Swipe.h"

void swipe(int *num1, int *num2)
{
*num1 = *num2 ^ *num1 ^ (*num2 = *num1);
}


