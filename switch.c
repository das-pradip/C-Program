#include<stdio.h>
int main(choice)
{printf("\n1. Addition");
printf("\n2. Odd-Even");
printf("\n3. Printing N numbers");
printf("\n4. Exit");
printf("\n\n Enter your coice");
scanf("%d,"&choice);
switch(choice)
{case1:
prinf("Enter two numbers");
scanf("%d%d",&a,&b);
c=a+b;
printf("\n sum is%d",s);
break;
case2:
printf("Enter a number");
scanf("%d",&a);
if(a%2==0)
	printf("Even Number");
else
	printf("Odd Number");
break;
case3:
printf("Enter a Number");
scanf("%d",&a);
for(b=1;b<=a;b++)
	printf("%d",b);
break;
case4:exit(0);
}getch();}