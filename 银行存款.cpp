#include<stdio.h>
int main()
{
	int money,year,rate,sum;
	
	printf("money=");
	
	scanf("%d%.2f%.2f",&year,&rate,&sum);
	
	sum= money*pow((1+rate),year);
	
	printf("sum=%.2f",sum);
	
	return 0;
}
