#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character:");
	ch=getchar();
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	printf("It is a letter\n");
	else
	printf("It is not a letter\n");
	return 0;
}
