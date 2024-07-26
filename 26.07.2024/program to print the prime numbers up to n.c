#include<stdio.h>
int main()
{
	int a,i,j;
	printf("n: ");
	scanf("%d",&a);
	    for(i=1;i<=a;i++)
		{
	        for(j=2;j<=i;j++)
		        {
			if(i%j==0)
			break;
		        }
	if(i==j)
	{
		printf("%d ",i);
	}
	        }
}
