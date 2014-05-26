#ifndef RandNum_CPP
#define RandNum_CPP
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include"IOnum.h"
int RandNum(int *un, int nsize)
{
	int cur_fact = nsize - 1;
	int sum = 0;
	int *un_p = &un;
	srand((unsigned)time(NULL));
	while(cur_fact>=0)
	{
		int x = rand()%(cur_fact-0+1)+0;
//		if (x<=0||x>=10)cout << "something WRONG!!!" << endl;
		sum = sum + un_p[x]*pow(10,cur_fact);
		for(int i = 0; i<= cur_fact; i++)
		{
			un_p[i] = 
		}
	}
	return RNum;
}
#endif
