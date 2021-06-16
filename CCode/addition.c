
#include<stdio.h>

int sum(int x,int y)
{
	return x+y;
}

int sum3(int x,int y, int z)
{
	sum(1,2);
	sum(3,4);	
	return x+y+z;
}


