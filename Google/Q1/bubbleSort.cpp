#ifndef bubbleSort_CPP 
#define bubbleSort_CPP 
#include<iostream>
#include<stdlib.h>
void bubbleSort(int a[], int size);
{
	int temp;
	for(int pass=1; pass<size; pass+)
	{
		for(int k=0; k<size-pass; k++)
		{
			temp = a[k];
			a[k] = a[k+1];
			a[k+1] = temp;
		}
	}
}
#endif
