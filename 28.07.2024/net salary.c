#include<stdio.h>
int main()
{
    int gs,ds;
    printf("Enter the Gross salary:");
    scanf("%d",&gs);
    printf("Enter the deductions:");
    scanf("%d",&ds);
    printf("net salary of an employee:%d",gs-ds);
    return 0;
}
