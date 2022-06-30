#include<stdio.h>
int main()
{
	int a,b,c,multiply;
	a=5;
	b=10;
	c=12;
	multiply=calculate(a,b,c);
	printf("Multiply=%d",multiply);
}
int calculate(int x,int y,int z)
{
	int d;
	d=x*y*z;
	return d
}