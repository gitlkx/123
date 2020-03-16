#include<stdio.h>
int main()
{
	int choice,i;
	double price;
	for(i=1;i<=5;i++){
		printf("[1] Select apples\n");
		printf("[2] Select pears\n");
		printf("[3] Select oranges\n");
		printf("[4] Select grapes\n");
		printf("[0] exit \n");
		
		printf("Enter choice:");
		scanf("%d",&choice);
		if(choice==0)
		break;
		switch(choice){
			case 1:price=3.00;break;
			case 2:price=2.50;break;
			case 3:price=4.10;break;
			case 4:price=10.30;break;
			default:price=0.0;break;
		}
		printf("price=%0.1f\n",price);
		
	}
	printf("Thanks\n");
	return 0;

}
