#include<stdio.h>

int main()
{
	int i,n;
	
	double sum,item,flag,denominator; 
	
    sum=0;
	denominator=1;
	flag=1;
	
	printf("enter n:");
	
	scanf("%d",&n);
	

	
	for(i=1;i<=n;i++){
		item=flag*1.0/denominator;
		sum=sum+item;
		flag=-(flag+1);
		denominator=denominator+2;
		}
	printf("sum=%.3f",sum);
	
	return 0;
	
}
