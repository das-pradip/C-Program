#include<stdio.h>
int func(int);
 int main()
{
	int a=2;
	printf("%d",func(a));
	return 0;
}
int func(int a)
{
	if(a>1)
		return func(--a)+10;
	else
		return 0;
}