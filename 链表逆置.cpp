struct ListNode *reverse( struct ListNode *head ){
  struct ListNode *newHead = NULL;
  struct ListNode *oldHead = head;
  struct ListNode *temp = NULL;
  while(oldHead){
    temp = oldHead->next;
    oldHead->next = newHead; //断开节点的连接或连接节点
    newHead = oldHead;        //赋值给新节点
    oldHead = temp;
  }
  return newHead;
}
