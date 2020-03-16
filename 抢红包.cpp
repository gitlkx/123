#include<stdio.h>
#include<stdlib.h>
typedef struct figure *p;  
struct figure{
  int Data;
  p next;
};
typedef struct figure list;
int main(void){
  int k;
  scanf("%d",&k);
  int i;
  p head;
  do{
    scanf("%d",&i);
    if(i<0)break;
    p l;
    l = (p)malloc(sizeof(list));
    l->Data = i;
    l->next = NULL;
    if(head==NULL)head = l;
    l->next = head;
    head = l;
  }while(i>=0);
  
  int j;
  for(j=1;j<k&&head->next!=NULL;j++){
    head=head->next;
  }
  if(j==k)printf("%d",head->Data);
  else printf("NULL");
}
