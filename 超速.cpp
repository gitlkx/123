#include<stdio.h>

int main()
{
	int a,b;
	float c;
	c=(b-a)*100.0/b;
	scanf("%d%d",&a,&b);	
	if(c<=10)
	printf("OK");
	else if(10<c<=50)
	printf("Exceed %.0f%%. Ticket 200",&c);
	else
	printf("Exceed %.0f%%. License Revoked",&c);
	
	return 0;
	
	
}
