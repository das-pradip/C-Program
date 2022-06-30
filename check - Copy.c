#include<stdio.h>
 int main()
{
for(fun());
}
int fun()
{
static int x=4;
printf("%d",x);
return(--x);
}
