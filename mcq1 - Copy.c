#include<stdio.h>
int main()
{
	int a[]={1,2,3,4};
	int sum=0;
	int i=0;
	for(int i=0;i<=3;i++)
	{
		sum+=a[i];
	}
	printf("%d",sum);
	return 0;
}