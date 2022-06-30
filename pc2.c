#include<stdio.h>
int main()
{
	int i=1,a;
	while(i<=2)
	{
		printf("enter a number");
		scanf("%d",&a);
		if(a>2)
			break;
		i++;
	}
	i==3?printf("ends normally"):printf("applied break");
	return 0;
}