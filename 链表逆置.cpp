struct ListNode *reverse( struct ListNode *head ){
  struct ListNode *newHead = NULL;
  struct ListNode *oldHead = head;
  struct ListNode *temp = NULL;
  while(oldHead){
    temp = oldHead->next;
    oldHead->next = newHead; //�Ͽ��ڵ�����ӻ����ӽڵ�
    newHead = oldHead;        //��ֵ���½ڵ�
    oldHead = temp;
  }
  return newHead;
}
