#include<stdio.h>
int x;
void f1()
{
	int x=5;
	x++;
	printf("x=%d",x);
}
int main()
{
	extern int x;
	printf("x=%d",x);
	f1();
	printf("x=%d",x);
}
