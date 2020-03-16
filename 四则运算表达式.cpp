#include<stdio.h>
int main()
{
	double x,y;
	char symbol;
	printf("Type in an expression:");
	scanf("%lf%c%lf",&x,&symbol,&y);
	
	if(symbol='+')
	printf("=%.2f\n",x+y);
	else if(symbol='-')
	printf("=%.2f\n",x-y);
	else if(symbol='*')
	printf("=%.2f\n",x*y);
	else if(symbol='/')
	printf("=%.2f\n",x/y);
	else
	printf("Unknown operator\n");
	return 0;
}
