#include<stdio.h>
int add(char *p)
{
        int a=0,b=0;
        int symbol=0;
        for(int i=0;p[i]!='\0';i++)
	{
                if(p[i]>='0' && p[i]<='9')
                {
                        if(symbol==0)
                        {
                                a=a*10+p[i]-48;
                        }
                        else
                        {
                                b=b*10+p[i]-48;
                        }
                }
                else if(p[i]='+')
                {
                symbol = 1;
                }
        }

printf("A =%d and B = %d \n",a,b);
return a+b;
}
                
