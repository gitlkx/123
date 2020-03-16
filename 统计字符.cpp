#include<stdio.h>
int main()
{
	int digit,letter,other,blank;
	char ch;
	int i;
	digit=letter=other=blank=0;
	printf("Enter characters:");
	for(i=1;i<=n;i++){
		ch=getchar();
		if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
		letter ++;
		else if(ch>='0'&&ch<='9')
		digit ++;
		else
		other ++;
	}
	printf("letter=%d,diglit=%d,other=%d\n",letter,digit,other);
	return 0;
 } 
