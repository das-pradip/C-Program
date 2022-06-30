#include<stdio.h>
void printstr(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		printf("%c",str[i]);
		i++;
	}
}
 int main()
{
	char str[89];
	gets(str);
	printf("using printf %s",str);
	printf("using puts:\n");
	puts(str);
	return 0;
}
