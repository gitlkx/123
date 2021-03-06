2-1 答案正确 得分: 2 / 2 
下面代码段的时间复杂度是（b）。 (2分) 
x=0;  
for( i=1; i<n; i++ )  
    for ( j=1; j<=n-i; j++ )  
        x++;
1.O(n)
2.O(n?2??)
3.O(n?3??)
4.O(2?n??)
2-2 答案正确 得分: 2 / 2 
表达式a*(b+c)-d的后缀表达式是：a (2分)
1.a b c + * d -
2.a b c d * + -
3.a b c * + d -
4.- + * a b c d
2-3 答案正确 得分: 2 / 2 
若用大小为6的数组来实现循环队列，且当前front和rear的
值分别为0和4。当从队列中删除两个元素，再加入两个元素后a
，front和rear的值分别为多少？ (2分)
1.2和0
2.2和2
3.2和4
4.2和6
2-4 答案正确 得分: 2 / 2 
将5个字母ooops按此顺序入栈，则有多少种不同的出栈顺序可以仍然得到ooops？c (2分)
1.1
2.3 
3.5
4.6
2-5 答案正确 得分: 2 / 2 
在下述结论中，正确的是：a (2分)
① 只有2个结点的树的度为1；
② 二叉树的度为2；
③ 二叉树的左右子树可任意交换；
④ 在最大堆（大顶堆）中，从根到任意其它结点的路径上的键值一定是按非递增有序排列的。
1.①④
2.②④
3.①②③
4.②③④
2-6 答案正确 得分:b 2 / 2 
在一个用数组表示的完全二叉树中，如果根结点下标为1，那么下标为17和19这两个结点的最近公共祖先结点在哪里（数组下标）？ （注：两个结点的“公共祖先结点”是指同时都是这两个结点祖先的结点） (2分)
1.8
2.4
3.2
4.1
2-7 答案正确 得分: 2 / 2 
给定有权无向图如下。关于其最小生成树，下列哪句是对的？a (2分)

1.最小生成树不唯一，其总权重为23
2.最小生成树唯一，其总权重为20
3.边(B, F)一定在树中，树的总权重为23
4.边(H, G)一定在树中，树的总权重为20
2-8 答案正确 得分: 2 / 2 
对下图进行拓扑排序，可以得到不同的拓扑序列的个数是：b (2分)

1.4
2.3
3.2
4.1
2-10 答案正确 得分: 2 / 2 
线性表L在什么情况下适用于使用链式结构实现？a (2分)
1.需不断对L进行删除插入
2.需经常修改L中的结点值
3.L中含有大量的结点
4.L中结点结构复杂
2-11 答案正确 得分: 2 / 2 
设h为不带头结点的单向链表。在h的头上插入一个新结点t的语句是：d(2分)
1.h=t; t->next=h->next;
2.t->next=h->next; h=t;
3.h=t; t->next=h;
4.t->next=h; h=t;
2-12 答案正确 得分: 2 / 2 
对于顺序存储的长度为N的线性表，访问结点和增加结点的时间复杂度为：b(2分)
1.O(1), O(1)
2.O(1), O(N)
3.O(N), O(1)
4.O(N), O(N)
2-13 答案正确 得分: 2 / 2 
二叉树的中序遍历也可以循环地完成。给定循环中堆栈的操作序列
如下（其中push为入栈，pop为出栈）：
push(1), push(2), push(3), pop(), push(4), pop(),
 pop(), push(5), pop(), pop(), push(6), pop()
以下哪句是对的？b(2分)
1.6是根结点
2.3和5是兄弟结点
3.2是4的父结点
4.以上全不对
2-14 答案正确 得分: 2 / 2 
设一个堆栈的入栈顺序是1、2、3、4、5。若第一个出栈的元素是4，
则最后一个出栈的元素必定是：d (2分)
1.1
2.3
3.5
4.1或者5
2-15 答案正确 得分: 2 / 2 
已知一棵二叉树的树形如下图所示，其后序序
列为{ e, a, c, b, d, g, f }。树中与结点a同层的结点是：b(2分)

1.c
2.d
3.f
4.g
2-16 答案正确 得分: 2 / 2 
若一棵二叉树的后序遍历序
列是{ 1, 3, 2, 6, 5, 7, 4 }，中序遍历序列是{ 1, 2, 3, 4, 5, 6, 7 }，
则下列哪句是错的？a(2分)
1.这是一棵完全二叉树
2.2是1和3的父结点
3.这是一棵二叉搜索树
4.7是5的父结点
2-17 答案正确 得分: 2 / 2 
将{ 32, 2, 15, 65, 28, 10 }依次插入初始为空的二叉搜索树。则该树的前序遍历结果是：d(2分)
1.2, 10, 15, 28, 32, 65
2.32, 2, 10, 15, 28, 65
3.10, 28, 15, 2, 65, 32
4.32, 2, 15, 10, 28, 65
2-18 答案正确 得分: 2 / 2 
二叉树中第5层（根的层号为1）上的结点个数最多为：c(2分)
1.8
2.15
3.16
4.32
2-19 答案正确 得分: 2 / 2 
将10, 12, 1, 14, 6, 5, 8, 15, 3, 9, 7逐个按顺序插入到初始为空的最小堆中，
然后连续执行两次删除最小元素操作（DeleteMin），再插入4，16，此后堆顶的元素是什么？a (2分)
1.4
2.5
3.7
4.9
2-20 答案正确 得分: 2 / 2 
下列的序列中，哪一组是堆？c (2分)
1.37,99,45,33,66,10,22,13
2.99,45,66,13,37,10,22,33
3.99,66,45,33,37,10,22,13
4.99,66,22,33,37,13,45,10
2-21 答案正确 得分: 2 / 2 
设一段文本中包含字符{a, b, c, d, e}，其出现频率相应为{3, 2, 5, 1, 1}。
则经过哈夫曼编码后，文本所占字节数为：c (2分)
1.40
2.36
3.25
4.12
2-22 答案正确 得分: 2 / 2 
将1~6这6个键值插到一棵初始为空的二叉搜索树中。
如果插入完成后，搜索树结构如图所示，问：可能的插入序列是什么？d (2分)

1.1 2 3 4 5 6
2.4 1 2 3 5 6
3.4 1 3 2 6 5
4.4 1 3 2 5 6
2-23 答案正确 得分: 2 / 2 
具有1102个结点的完全二叉树一定有__个叶子结点。b(2分)
1.79
2.551
3.1063
4.不确定
2-24 答案正确 得分: 2 / 2 
给定一个有向图的邻接表如下图，则该图有__个强连通分量。b(2分)

1.4 {{0, 1, 5}, {2}, {3}, {4}}
2.3 {{2}, {4}, {0, 1, 3, 5}}
3.1 {0, 1, 2, 3, 4, 5}
4.1 {0, 5, 1, 3}
2-25 答案正确 得分: 2 / 2 
在一个有权无向图中，如果顶点b到顶点a的最短路径长度是10，顶点c与顶点b之间存在一
条长度为3的边。那么下列说法中有几句是正确的？ b(2分)
1.c与a的最短路径长度就是13
2.c与a的最短路径长度就是7
3.c与a的最短路径长度不超过13
4.c与a的最短路径不小于7
1.1句
2.2句
3.3句
4.4句
2-26 答案正确 得分: 2 / 2 
在图中自a点开始进行广度优先遍历算法可能得到的结果为：d (2分)

1.a, e, d, f, c, b
2.a, c, f, e, b, d
3.a, e, b, c, f, d
4.a, b, e, c, d, f
2-2453 答案正确 得分: 2 / 2 
链表不具有的特点是：b (2分)
1.插入、删除不需要移动元素
2.方便随机访问任一元素
3.不必事先估计存储空间
4.所需空间与线性长度成正比
2-2453 答案正确 得分: 2 / 2 
带头结点的单链表h为空的判定条件是：b (2分)
1.h == NULL;
2.h->next == NULL;
3.h->next == h;
4.h != NULL;
2-2454 答案正确 得分: 2 / 2 
若借助堆栈将中缀表达式a+b*c+(d*e+f)*g转换为后缀表
达式，当读入f时，堆栈里的内容是什么（按堆栈自底向上顺序）？b (2分)
1.+(*+
2.+(+
3.++(+
4.abcde
2-2454 答案正确 得分: 2 / 2 
若top为指向栈顶元素的指针，判定栈S（最多容纳m个元素）为空的条件是：b (2分)
1.S->top == 0
2.S->top == -1
3.S->top != m-1
4.S->top == m-1
2-2454 答案正确 得分: 2 / 2 
若栈采用顺序存储方式存储，现两栈共享空间V[m]：top[i]代表第i（i=1或2）
个栈的栈顶；栈1的底在V[0]，栈2的底在V[m-1]，则栈满的条件是：d (2分)
1.|top[2]-top[1]|==0
2.top[1]+top[2]==m
3.top[1]==top[2]
4.top[1]+1==top[2]
2-2454 答案正确 得分: 2 / 2 
有六个元素以6、5、4、3、2、1的顺序进栈，问哪个不是合法的出栈序列？b (2分)
1.2 3 4 1 5 6
2.3 4 6 5 2 1
3.5 4 3 6 1 2
4.4 5 3 1 2 6
2-2455 答案正确 得分: 2 / 2 
要使一棵非空二叉树的先序序列与中序序列相同，其所有非叶结点须满足的条件是：b(2分)
1.只有左子树
2.只有右子树
3.结点的度均为1
4.结点的度均为2
2-2455 答案正确 得分: 2 / 2 
按照二叉树的定义，具有3个结点的二叉树有几种？ c(2分)
1.3
2.4
3.5
4.6
2-2455 答案正确 得分: 2 / 2 
某二叉树的中序序列和后序序列正好相反，则该二叉树一定是c (2分)
1.空或只有一个结点
2.高度等于其结点数
3.任一结点无左孩子
4.任一结点无右孩子
2-2456 答案正确 得分: 2 / 2 
将 {5, 2, 7, 3, 4, 1, 6} 逐个按顺序插入到初始为空的最小
堆（小根堆）中。则该树的前序遍历结果为：d(2分)
1.1, 3, 2, 5, 4, 7, 6
2.1, 2, 3, 4, 5, 7, 6
3.1, 2, 5, 3, 4, 7, 6
4.1, 3, 5, 4, 2, 7, 6
2-2456 答案正确 得分: 2 / 2 
对最小堆（小顶堆）{1,3,2,12,6,4,8,15,14,9,7,5,11,13,10} 
进行三次删除最小元的操作后，结果序列为：c(2分)
1.4,5,6,7,8,9,10,11,12,13,14,15
2.4,6,5,13,7,10,8,15,14,12,9,11
3.4,6,5,12,7,10,8,15,14,9,13,11
4.4,5,6,12,7,10,8,15,14,13,9,11
2-2456 答案正确 得分: 2 / 2 
已知关键字序列（5，8，12，19，28，20，15，22）是最小堆
（小根堆），插入关键字3，调整后得到的最小堆是：a (2分)
1.3，5，12，8，28，20，15，22，19
2.3，5，12，19，20，15，22，8，28
3.3，8，12，5，20，15，22，28，19
4.3，12，5，8，28，20，15，22，19
2-2456 答案正确 得分: 2 / 2 
哪种树，树中任何结点到根结点路径上的各结点值是有序的？c (2分)
1.二叉搜索树
2.完全二叉树
3.堆
4.以上都不是
2-2457 答案正确 得分: 2 / 2 
已知字符集{ a, b, c, d, e, f, g, h }。若各字符的哈夫曼编
码依次是 0100, 10, 0000, 0101, 001, 011, 11, 0001，则编
码序列 0100011001001011110101 的译码结果是：d(2分)
1.acgabfh
2.adbagbb
3.afbeagd
4.afeefgd
2-2458 答案正确 得分: 2 / 2 
将{5, 2, 7, 3, 4, 1, 6}依次插入初始为空的二叉搜索树。则该树的后序遍历结果是：c(2分)
1.1, 2, 3, 4, 6, 7, 5
2.1, 4, 2, 6, 3, 7, 5
3.1, 4, 3, 2, 6, 7, 5
4.5, 4, 3, 7, 6, 2, 1
2-2458 答案正确 得分: 2 / 2 
对二叉搜索树进行什么遍历可以得到从小到大的排序序列？c (2分)
1.前序遍历
2.后序遍历
3.中序遍历
4.层次遍历
2-2459 答案正确 得分: 2 / 2 
已知一棵完全二叉树的第9层（设根为第1层）有100个叶结点，
则该完全二叉树的结点个数最多是：b (2分)
1.311
2.823
3.1847
4.无法确定
2-2459 答案正确 得分: 2 / 2 
具有65个结点的完全二叉树其深度为（根的深度为1）：b (2分)
1.8
2.7
3.6
4.5
2-2460 答案正确 得分: 2 / 2 
下面给出的有向图中，有__个强连通分量。c(2分)

1.1 ({0,1,2,3,4})
2.1 ({1,2,3,4})
3.2 ({1,2,3,4}, {0})
4.5 ({0}, {1}, {2}, {3}, {4})
2-2460 答案正确 得分: 2 / 2 
关于图的邻接矩阵，下列哪个结论是正确的？b (2分)
1.有向图的邻接矩阵总是不对称的
2.有向图的邻接矩阵可以是对称的，也可以是不对称的
3.无向图的邻接矩阵总是不对称的
4.无向图的邻接矩阵可以是不对称的，也可以是对称的
2-2460 答案错误 得分: 0 / 2 
在一个有向图中，所有顶点的入度与出度之和等于所有边之和的多少倍？b (2分)
1.1/2
2.1
3.2
4.4
2-2461 答案正确 得分: 2 / 2 
我们用一个有向图来表示航空公司所有航班的航线。下列哪种算法最
适合解决找给定两城市间最经济的飞行路线问题？a (2分)
1.Dijkstra算法
2.Kruskal算法
3.深度优先搜索
4.拓扑排序算法
2-2462 答案正确 得分: 2 / 2 
给定无向图G，从V0出发进行深度优先遍历访问的边
集合为： {(V0,V1), (V0,V4), (V1,V2), (V1,V3), (V4,V5), (V5,V6)}。则
下面哪条边不可能出现在G中？ c(2分)
1.(V0,V2)
2.(V0,V6)
3.(V1,V5)
4.(V4,V6)

程序填空题 总分: 15 / 16  temp_width++   	
 if ( p->Right != NULL )  Enqueue(p->Right, Q)      
temp_width = 0

Old_head->Next=New_head；
List Reverse( List L )

P
H->Elements[i]=H->Elements[i/2]

#include<iostream>  
#include<queue>  
#include<stdlib.h>  
using namespace std;  
int btree[100]={0};  
int ctree[100]={0};  
#define SizeMax 105  
struct Node{  
    Node *l;  
    Node *r;  
    int data;  
};  
int num=0;  
int n;  
Node * createTree(int btree[],int ctree[],int n)  
{  
    if(n<=0)return NULL;  
    //cout<<"12345"<<endl;  
    Node *T;  
    int ori=btree[n-1];//找到跟节点  
    int k;  
     T=(Node*)malloc(sizeof(Node));  
    T->data=ori;  
    for(int i=0;i<n;i++)//中序遍历左右分离  
    {  
        if(ctree[i]==ori)  
        {  
            k=i;break;  
        }  
     }  
    T->l= createTree(btree,ctree,k);  
    T->r=createTree(btree+k,ctree+k+1,n-k-1);  
    return T;  
}  
void Print(Node *r)  
{  
    Node *p;  
    Node *pr[SizeMax];  
    int rear=-1,front=-1;  
    rear++;  
    pr[rear]=r;  
    while(rear!=front)  
    {  
        front=(front+1);  
        p=pr[front];  
        cout<<p->data;  
        num++;  
        if(num<n)  
            cout<<" ";  
        if(p->l!=NULL)  
        {  
            rear=(rear+1);  
            pr[rear]=p->l;  
        }  
        if(p->r!=NULL)  
        {  
            rear=(rear+1);  
            pr[rear]=p->r;  
        }  
    }  
}  
int main(){  
  
    cin>>n;  
    for(int i=0;i<n;i++)  
        cin>>btree[i];  
    for(int i=0;i<n;i++)  
        cin>>ctree[i];  
    Node *T=createTree(btree,ctree,n);  
    Print(T);  
    return 0;  
}
5-1 答案正确 得分: 9 / 6 
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
         (6分); 
         if ( p->Left != NULL )  Enqueue(p->Left, Q);
         ;  
         if ( Queue_front(Q) > Last ) {
            Last = Queue_rear(Q);
            if ( temp_width > max_width ) max_width = temp_width;
            ;
         } /* end-if */
      } /* end-while */
      return  max_width;
   } /* end-else */
}
分数组成	结果	得分
1	答案正确	3
2	答案正确	3
3	答案正确	3
5-2468 未作答 得分: 0 / 4 
下列代码的功能是返回带头结点的单链表L的逆转链表。
List Reverse( List L )
{
    Position Old_head, New_head, Temp;
    New_head = NULL;
    Old_head = L->Next;

    while ( Old_head )  {
        Temp = Old_head->Next;
        (4分);  
        New_head = Old_head;  
        Old_head = Temp; 
    }
    ;
    return L;
}
分数组成	结果	得分
1	未作答	0
2	未作答	0
5-3 答案正确 得分: 6 / 6 
下列代码的功能是将小顶堆H中指定位置P上的元素的整数键值下调D个单位，然后继续将H调整为小顶堆。
void DecreaseKey( int P, int D, PriorityQueue H )
{
   int i, key;
   key = H->Elements[P] - D;
   for ( i = (6分); H->Elements[i/2] > key; i/=2 )
      ;
   H->Elements[i] = 
}
分数组成	结果	得分
1	答案正确	3
2	答案正确	3

编程题 总分: 25 / 25 
7-2 答案正确 得分: 25 / 25 
给定一棵二叉树的后序遍历和中序遍历，请你输出其层序遍历的序列。这里假设键值都是互不相等的正整数。
输入格式：
输入第一行给出一个正整数N（≤30），是二叉树中结点的个数。第二行给出其后序遍历序列。第三行给出其中序遍历序列。数字间以空格分隔。
输出格式：
在一行中输出该树的层序遍历的序列。数字间以1个空格分隔，行首尾不得有多余空格。
输入样例：
7
2 3 1 5 7 6 4
1 2 3 4 5 6 7
输出样例：
4 1 6 3 5 7 2

测试点	结果	耗时	内存
0	答案正确	3 ms	748KB
1	答案正确	3 ms	768KB
2	答案正确	3 ms	764KB
3	答案正确	2 ms	384KB
4	答案正确	3 ms	756KB
5	答案正确	3 ms	768KB

