#include<stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	if(x<=300)
	printf("cost=%d",x*2);
	else if(300<x)
	printf("cost=%.1f",x*2.5);
	else
	printf("cost=%d",x*5);
	
	return 0;
	
	
	
}
