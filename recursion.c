//decimal to octal conversion//
#include<stdio.h>
void fun(int);
 int main()
{
int a=25;
fun(a);
}
void fun(int a)
{
	if(a>0){
		fun(a/8);
		printf("%d",a%8);
	}
}