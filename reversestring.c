#include<stdio.h>
char* reverse(char*);
int main()
{
	printf("%S",reverse("computer"));
}
char* reverse(char *p)
{
	int l,i;
	char ch;
	
	for(l=0;*(p+1)!=0;l++);
	for(i=0;i<1/2;i++)
	{
		ch=*(p+i);
		*(p+i)=*(p+l-1-i);
		*(p+l-1-i)=ch;
	}
	return(p);
}