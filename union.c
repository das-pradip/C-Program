#include<stdio.h>
union item
{
	 long int x;float y;char z;
};
void main()
{
	union item i1;
	i1.x=5;
	printf("\nx=%d",i1.x);
	i1.y=3.4546;
	printf("\ny=%f",i1.y);
	i1.z='suman';
	printf("\nz=%d",i1.z);
}
