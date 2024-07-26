#include<stdio.h>
int main()
{
	float r,a,c;
	printf("radius : ");
	scanf("%f",&r);
	a=3.14*r*r;
	printf("area = %f\n",a);
	c=2*3.14*r;
	printf("circumference = %f\n",c);
	return 0;
}
