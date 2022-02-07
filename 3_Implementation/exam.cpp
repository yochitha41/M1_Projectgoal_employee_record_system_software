#include<stdio.h>
int main()
{
	
int val = 100;
const int *pc = &val;
const int cval=200;
int *ptr;
pc = &cval;
}