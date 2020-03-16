#include<stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	if(x<=0)
	printf("Invalid Value!");
	else
	if(x<=50)
	printf("cost = %.2f",x*0.53);
	else
	if(x>50)
	printf("cost = %.2f",(x-50)*0.58+26.5);
	return 0;
}
