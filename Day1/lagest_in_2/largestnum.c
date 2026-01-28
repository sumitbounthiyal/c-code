#include<stdio.h>
#include"largestnum.h"

void check_largest(int* num1,int* num2)
{
if(*num1<*num2)
{
*num1=*num2^*num1^(*num2=*num1);
}
} 
