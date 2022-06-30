#include<stdio.h>
struct date
{
	int d,m,y;
};
void main()
{
	struct date today,d1;
	today.d=26;
	today.m=5;
	today.y=2022;
	
	d1=today;
	
	printf("enter todays date");
	scanf("%d\%d\%d",&d1.d,&d1.m,&d1.y);
	printf("date:%d\%d\%d",d1.d,d1.m,d1.y);
}