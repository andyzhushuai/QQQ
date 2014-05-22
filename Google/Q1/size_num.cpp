#ifndef SIZE_NUM_CPP 
#define SIZE_NUM_CPP 
#include<iostream>
#include<stdlib.h>
int size_num(int num)
{
	int cur_size = 0;
	while(cur_unit == num)
	{
		cur_unit = num % power(10,cur_size);
		cur_size++;
	}
	return cur_size;
}
#endif
