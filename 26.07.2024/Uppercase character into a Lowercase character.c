#include<stdio.h>
int main()
{
	char uc,lc;
	printf("uppercase character : ");
	scanf("%c",&uc);
	lc = uc+32;
	printf("lowercase : %c\n",lc);
	return 0;
}
