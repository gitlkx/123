5-1
���д���Ĺ����Ǽ������������T�Ŀ�ȡ��������Ŀ����ָ�������������ֵ������Queue_rear��Queue_front�ֱ𷵻ص�ǰ����Q�ж�β�Ͷ���Ԫ�ص�λ�á�

typedef struct TreeNode *BinTree;
struct TreeNode
{
   int Key;
   BinTree  Left;
   BinTree  Right;
};

int Width( BinTree T )
{
   BinTree  p;
   Queue Q;
   int Last, temp_width, max_width;

   temp_width = max_width = 0;
   Q = CreateQueue(MaxElements);
   Last = Queue_rear(Q);
   if ( T == NULL) return 0;
   else {
      Enqueue(T, Q);
      while (!IsEmpty(Q)) {
         p = Front_Dequeue(Q); 
         temp_width++
  

         
(3��); 
         if ( p->Left != NULL )  Enqueue(p->Left, Q);
         if ( p->Right != NULL )Enqueue (p->Right, Q)
(3��);  
         if ( Queue_front(Q) > Last ) {
            Last = Queue_rear(Q);
            if ( temp_width > max_width ) max_width = temp_width;
            temp_width = 0
            
(3��);
         } /* end-if */
      } /* end-while */
      return  max_width;
   } /* end-else */
}
����: ��Խ
��λ: �㽭��ѧ
5-2
���д���Ĺ����ǽ�������T�еĽ�㰴�ղ��������˳�������

typedef struct TreeNode *Tree;
struct TreeNode
{
   int Key;
   Tree  Left;
   Tree  Right;
};

void Level_order ( Tree T )
{
   Queue Q;

   if ( !T ) return; 
   Q = CreateQueue( MaxElements ); 
   Enqueue( T, Q ); 
   while ( !IsEmpty( Q ) ){
      T = Front_Dequeue ( Q ); /* return the front element and delete it from Q */
      printf("%d ", T->Key);
      if ( T->Left ) 
      Enqueue( T->Left, Q )
         
(3��);
      if ( T->Right
(3��) ) 
Enqueue( T->Right, Q )
         
(3��);
   }
}
