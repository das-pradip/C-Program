#include<stdio.h>
#define row 10
#define column 20
int main()
{
	int (*p) [row][column];
	printf("%d", sizeof(*p));
}