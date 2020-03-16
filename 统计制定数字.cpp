#include<stdio.h>
int main()
{
	int number,digit,x,i;
	char ch;
	printf("enter your number:");
	scanf("%d",&number);
	printf("the digit:");
	scanf("%d",&digit);
	for (i=1;i<=5;i++){
		ch=getchar();
		if(ch=digit)
		x++;
	}
	printf("x=%d",x);
	return 0;
}
