#include<stdio.h>
int main()
{
	int letter,space,digit,other;
	char ch;
	int i;
	letter=space=digit=other=0;
	printf("Enter 10 characters:");
	for(i=1;i<=10;i++){
		ch=getchar();
		if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
		letter++;
		else if(ch>='0'&&ch<='9')
		digit++;
		else if(ch=' '&&ch='
		')
		space++;
		else
		other++;
	}
	printf("letter=%d,space=%d,digit=%d,other=%d",letter,space,digit,other);
	return 0;
}
