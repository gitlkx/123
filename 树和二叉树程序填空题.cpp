5-1
下列代码的功能是计算给定二叉树T的宽度。二叉树的宽度是指各层结点数的最大值。函数Queue_rear和Queue_front分别返回当前队列Q中队尾和队首元素的位置。

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
  

         
(3分); 
         if ( p->Left != NULL )  Enqueue(p->Left, Q);
         if ( p->Right != NULL )Enqueue (p->Right, Q)
(3分);  
         if ( Queue_front(Q) > Last ) {
            Last = Queue_rear(Q);
            if ( temp_width > max_width ) max_width = temp_width;
            temp_width = 0
            
(3分);
         } /* end-if */
      } /* end-while */
      return  max_width;
   } /* end-else */
}
作者: 陈越
单位: 浙江大学
5-2
下列代码的功能是将二叉树T中的结点按照层序遍历的顺序输出。

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
         
(3分);
      if ( T->Right
(3分) ) 
Enqueue( T->Right, Q )
         
(3分);
   }
}
