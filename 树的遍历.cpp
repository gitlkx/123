#include<stdio.h>
#include <stdlib.h>
typedef struct TreeNode *Bintree;
typedef struct jd *Queue;
struct TreeNode{
	int data;
	struct TreeNode *right;
	struct TreeNode *lift;
};
struct jd{
	struct TreeNode *data;
	struct jd *next;              //链式队列 
};
Bintree asd(int* hou,int* zhong,int i);
void LevelorderTraversal(Bintree T);
struct jd *Add(Queue list,Bintree T,Queue *tail);
Queue DeleteQ(Queue Q);
Bintree t=NULL;
int i=0;
int main()
{
	Bintree T=NULL;
	int n,i;
	scanf("%d",&n);
	int hou[n],zhong[n];
	for(i=0;i<n;i++)
		scanf("%d",&hou[i]);
	for(i=0;i<n;i++)	
		scanf("%d",&zhong[i]);
	T=asd(hou,zhong,n);
	LevelorderTraversal(T);
} 
Bintree asd(int* hou,int* zhong,int n)
{	
	Bintree T;
	int i;
	if(!n)
		return NULL;
	T =(Bintree)malloc(sizeof(struct TreeNode));
	T->data=hou[n-1];
	for(i=0;i<n;i++)
		if(hou[n-1]==zhong[i])
			break;
	T->lift=asd(hou,zhong,i);     
	T->right=asd(hou+i,zhong+i+1,n-i-1);  //i从0开始，递归分隔 
	return T;
} 
void LevelorderTraversal(Bintree T)
{
	Queue Q=NULL,tail=NULL;
	if(!T)
		return;
	Q=Add(Q, T,&tail);
	while(Q)	
	{
		Q=DeleteQ(Q);
		if(t->lift)
			Q=Add(Q,t->lift,&tail);
		if(t->right)
			Q=Add(Q,t->right,&tail);
	}
}
struct jd *Add(Queue list,Bintree T,Queue *tail)
{
	struct jd *p;
	p=(struct jd*)malloc(sizeof(struct jd));
	p->data=T;
	if(list==NULL)
		list=p;
	else  
		(*tail)->next=p;
	*tail=p;
	p->next=NULL;
	return list;
}
Queue DeleteQ(Queue Q)
{
	Queue q=NULL;
		q = Q;
		Q = q->next;
		t=q->data;
		if(i==0)
			printf("%d",q->data->data);
		else
			printf(" %d",q->data->data);
		i++;
		free(q);
		return Q;
}
