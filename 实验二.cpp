#include<stdio.h>
#include<stdlib.h>
typedef struct fu*Y;
typedef struct Xx*X;
struct Xx{
	Y i[100];
    int top;
    
};
struct fu{
	int i;
	Y left;
	Y right;
	int j;
};
X chu(){
	X x =(X)malloc(sizeof(struct Xx));
	x->top = -1;
	return x;
}
Y chuan(int i){
	Y x = (Y)malloc(sizeof(struct fu));
	x->left=NULL;
	x->right=NULL;
	x->i=i;
	x->j=-1;
	return x;
}
void add(X x,int i){
	if(x->top>99&&printf("满\n"))
	return;
	x->i[++x->top]=chuan(i);
	if(x->top)
	if(x->top%2){
	x->i[x->top/2]->left = x->i[x->top];
    x->i[x->top/2]->j=1;
	}
	else{
	x->i[x->top/2-1]->right = x->i[x->top];
}
}
void add2(X x,Y y){
	if(x->top>99&&printf("满\n"))
	return;
	x->i[++x->top]=y;
}
Y det(X x){
	if(x->top<0&&printf("空\n"))
	return NULL;
	return x->i[x->top--];
}/*
void println1(Y y){
	if(y){
	
	if(y->left)
	println1(y->left);
	if(y->right)
	println1(y->right);
	printf("%d ",y->i);

}}*/
void println2(Y y){
	X x =chu();
	do{
		while(y&&y->j){
			add2(x,y);
			if(y->j==1){
				add2(x,y);
			}
			y=y->left; 
		}
		y=det(x);
		if(!y->j||(y->j==-1)){
			printf("%d ",y->i);
		    if(y->j==-1)
		    y->j++;
		}
		else{
		y->j--;
	    }
		y=y->right;
	}while(x->top>=0);
	
}
void println(Y y){
	X x =chu();
	while(y||x->top>=0){
		while(y){
		printf("%d ",y->i);
			add2(x,y);
		  	y=y->left; 
		}
		y=det(x);
		y=y->right;
	}
}
void println3(Y y){
	X x =chu();
	while(y||x->top>=0){
		while(y){
			add2(x,y);
		  	y=y->left; 
		}
		y=det(x);
		printf("%d ",y->i);
		y=y->right;
	}
}

int main(){
	X x =chu();
	int j=0,n=0;
	printf("请输入元素数目:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("我的第%d个元素:",i+1);
		scanf("%d",&j);
		add(x,j);
	}
	printf("\n我的二叉树\n");
	printf("-------------------------------\n");
	for(int i=0;i<=x->top;i++){
		printf("%d ",x->i[i]->i);
		if(x->i[i]->left)
		printf("left: %d ",x->i[i]->left->i);
		if(x->i[i]->right)
		printf("right: %d ",x->i[i]->right->i);
		printf("\n");
	}
	printf("----------------------------\n");
	int m=1;
	while(m){
	printf("\n请输入：（1表示先序，2表示中序，3表示后序，0表示退出）\n");	
	scanf("%d",&m);
	switch(m){
	case 1:{
		println(x->i[0]);
		break;
	}
	case 2:{
		println3(x->i[0]);
	
		break;
	}
	case 3:{
		println2(x->i[0]);
		break;
	}
	case 0:{
		printf("退出成功!!!\n");
		break;
	}
	default:{
		printf("输入错误!!!\n");
		break;
	}
}
	}
	return 0;
}
