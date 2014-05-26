#ifndef IOnum_CPP
#define IOnum_CPP
#include<iostream>
#include<stdlib.h>
#include"IOnum.h"
int main()
{
	int num = 0;
	cout << "Please input a number: " << endl;
	cin>>num;
	int nsize = size_num(num);
	int *un = (int *)malloc(sizeof(int)*nsize);
	units(un, nsize);
	int N_Allnum = N_num(num);
	int *AllNum = (int *)malloc(sizeof(int)*N_Allnum);
	int cur_size = 0;
	while((cur_size+1) == N_Allnum)
	{
		int cur_num = RandNum(un, nsize);
		for(int i = 0; i<cur_size+1; i++)
		{
			if(cur_num != AllNum[i])
			{
				if(i==cur_size)
					cur_num = AllNum[cur_size++];
				else
					continue;
			}
			else
				break;
		}
	}
	//sorting all numbers.
	bubbleSort(AllNum, N_Allnum);
	free(un);
	//sorting all numbers is over.
	for(int i = 0;i<N_Allnum;i++)
	{
		if(num==AllNum[i])
		{
			if(i!=(N_Allnum-1))
				cout<< " After " << num << ", Minimum is " << AllNum[i+1] << endl;
			else
				cout<< num << " is the maxmum." << endl;
		}
		else continue;
	}
	free(AllNum);
	return 0;
}
#endif
