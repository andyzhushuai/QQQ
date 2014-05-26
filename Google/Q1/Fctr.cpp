#ifndef Fctr_CPP
#define Fctr_CPP
#include<iostream>
#include<stdlib.h>
#include"IOnum.h"
int Fctr(int num)
{
	int sum = 1;
	if (num<=0) sum = 1;
	else
	{
		for(int i=1; i<=n; i++)
		{
			sum = sum * i;
		}
	}
	return sum;
}
#endif
