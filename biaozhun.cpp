#include<stdio.h>
int main()
{
	int un,i,n;
	double grade,total;
	
	printf("enter people number n:");
	scanf("%d",&n);
	total=0;
	un=0;
	for(i=1;i<=n;i++)
	printf("Enter grade#%d:",i);
	scanf("%lf",&grade);
	total=total+grade;
	if(grade<60)
	un++;
	
	printf("Grade average=%.2f\n",total/n);
	printf("Numble of failures=%d\n",un);
	return 0;
 } 
