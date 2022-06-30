#include<stdio.h>
int main()
{
while(fun());
}
int fun()
{
static x=4;
printf("%d",&x);
--x;

}
