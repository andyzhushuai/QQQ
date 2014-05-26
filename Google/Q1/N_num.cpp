#ifndef N_num_CPP
#define N_num_CPP
#include<iostream>
#include<stdlib.h>
#include"IOnum.h"
int N_num(int unit[], int nsize)
{
	int factor[10]={0};
	for (int i=0; i<nsize+1; i++)
	{
		for(int j=0; j<10; j++)
		if(unit[i]==j)
			factor[j]++ ;
	}
	int daughter = Fctr(nsize);
	int mother = 1;
	for(int k=0; k<10; k++)
	{
		mother = mother * Fctr(factor[k]);
	}
	
	return daughter/mother ;
}
#endif
