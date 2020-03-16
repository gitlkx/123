#include<stdio.h>
#include <stdlib.h>

typedef struct Node *p;
struct Node {
    int Data;
    p   Next;
};
typedef struct Node Nodes;

p sort( p L1,p last1, p L2,p last2,int length){
	if(L1==NULL&&L2==NULL)return NULL;
	else if(L1==NULL)return L2;
	else if(L2==NULL)return L1;
	
	p head = NULL,last = NULL;
	if(last1->Data<L2->Data){
	  	last1->Next = L2;
    	head = L1;
    	return head;
	}
	else if(last2->Data<L1->Data){
		  last2->Next = L1;
    	head = L2;
    	return head;
	}
	else{
		if(L1->Data<L2->Data){
			head = L1;
			L1 = L1->Next;
		}
		else{
			head = L2;
			L2 = L2->Next;
		}
		head->Next = NULL;
		last = head;
		while(length>0){
			if(L1->Data<=L2->Data){
				last->Next = L1;
				last = L1;
				if(L1->Next==NULL){
					last->Next = L2;
					return head;
				}
				L1 = L1->Next;
			}
			else if(L1->Data>=L2->Data){
				last->Next = L2;
				last = L2;
				if(L2->Next==NULL){
					last->Next = L1;
					return head;
				}
				L2 = L2->Next;
			}
		length--;
	  }
		return head;
	}
}
int main(void){

int i,j,length=0;
p head1=NULL,head2=NULL,last1=NULL,last2=NULL,list;
int k,o;
do{
	scanf("%d",&k);
	if(k==-1)break;
	length++;
	list =(p)malloc(sizeof(Nodes));
	list->Data = k;
	list->Next = NULL;
	if(head1==NULL){
		head1 = list;
		last1 = head1;
	}
	else{
		last1->Next = list;
		last1 = list;
	}
}while(k!=-1);

do{
	scanf("%d",&o);
	if(o==-1)break;
	length++;
	list =(p)malloc(sizeof(Nodes));
	list->Data = o;
	list->Next = NULL;
	if(head2==NULL){
		head2 = list;
		last2 = head2;
	}
	else{
		last2->Next = list;
		last2 = list;
	} 
}while(o!=-1);

p pl = sort(head1,last1,head2,last2,length);
if(pl!=NULL){
	while(pl->Next!=NULL){
		printf("%d ",pl->Data);
		pl = pl->Next;
	}
	printf("%d",pl->Data);
	}
else{
	printf("NULL");
}
return 0;
}
