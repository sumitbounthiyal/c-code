#include<stdio.h>
#include"npz.h"

int check_npz(int num)
{
return ((num>>31&1)==0?Positive:Negative);
} 
