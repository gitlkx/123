#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c){
		if (b>c)
		printf("a=%d,b=%d,c=%d",a,b,c);
		else
		printf("a=%d,c=%d,b=%d",a,c,b);
	}
	
	else if(b>a&&b>c){
		if(a>c)
		printf("b=%d,a=%d,c=%d",b,a,c);
		else
		printf("b=%d,c=%d,a=%d",b,c,a);
	}
	else if(c>a&&c>b){
		if(a>b)
		printf("c=%d,a=%d,b=%d",c,a,b);
		else
		printf("c=%d,b=%d,a=%d",c,b,a);
	}
	return 0;
}
