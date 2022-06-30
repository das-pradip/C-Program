#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice,a,b,s;
	while(1)
	{
		printf("\n1.adition");
		printf("\n2.odd-even");
		printf("\n3.printing N number");
		printf("\n4.exit");
		printf("\n\n enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			printf("enter two number");
			scanf("%d%d",&a,&b);
			s=a+b;
			printf("\n sum is %d",s);
			break;
			case 2:
			printf ("enter a number");
			scanf("%d",&a);
			if(a%2==0)
				printf("even numbder");
			else
				printf("odd number");
			break;
			case 3:
			printf("enter a number");
			scanf("%d",&a);
			for(b=1;b<=a;b++)
				printf("%d",b);
			break;
			case 4:exit(0);
			
		}
	}return 0;
}