#include<stdio.h>
int main()
{
	int a,b,t;
    printf("enter two numbers");
	scanf("%d%d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("%d%d",&a,&b);
}