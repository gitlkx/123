#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> 
typedef struct a *p;
struct a{
	int *Data;
	int MaxSize;
	int Front,Rear;
}; 
typedef struct a Queue;

p CreateQueue(int MaxSize){
	p l =(p)malloc(sizeof(Queue));
	l->Data = (int*)malloc(MaxSize*sizeof(int));
	l->Front = l->Rear = 0;
	l->MaxSize = MaxSize;
	return l; 	
}

bool AddQueue(p q,int d){
	if(((q->Rear+1)%q->MaxSize)==q->Front){
		printf("队列已满！");
		return false;
	}
	else{
		q->Rear = (q->Rear+1)%q->MaxSize;
		q->Data[q->Rear] = d;
		return true; 
	}
}

int DelectQueue(p q){
	if(q->Front==q->Rear){
		printf("队列为空！");
		return -1;
	}
	else{
		q->Front = (q->Front+1)%q->MaxSize;
		return q->Data[q->Front];
	}
}

int main(void){
	p queue1 = CreateQueue(1000);
	p queue2 = CreateQueue(1000);
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&j);
		if(j%2!=0){
			AddQueue(queue1,j);
			
		}
		else{
			AddQueue(queue2,j);
		}
	}
	while(n>0){
		if(queue1->Front!=queue1->Rear){
			int k;
			for(k=0;k<2;k++){
				if(n!=1)printf("%d ",DelectQueue(queue1));
				else printf("%d",DelectQueue(queue1));
				n--;
				if(queue1->Front==queue1->Rear)break;
			}
		}
		if(queue2->Front!=queue2->Rear){
			if(n!=1)printf("%d ",DelectQueue(queue2));
			else printf("%d",DelectQueue(queue2));
			n--;
		}
	}
	return 0;
} 
