#include<stdio.h>
int main()
{
	int i,n,sum,flag,denominator,item;
	printf("enter n="); 
	scanf("%d",&n);
	sum=0;
	flag=+1;
	denominator=1;
	for(i=1;i<=n;i++){
		item=flag*1.0/denominator;
		sum=sum+item;
		flag=-flag;
		denominator=denominator+2;
	}
	printf("sum=%f\n",sum);
	return 0;
}
