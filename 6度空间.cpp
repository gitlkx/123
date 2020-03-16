#include <stdio.h>
   #include <stdlib.h>
   #include <stdbool.h>
   #include <string.h>
   
   typedef struct node
   {
       int v;
       struct node * next;
  }Node, * pNode;
  typedef struct
  {
     pNode * adjList;
      int n;
      bool * visited;
  }ALGraph, * pALGraph;
  typedef struct
  {
      int * elem;
     int front, rear, size;
  }Queue, * pQueue;
  
  pALGraph initGraph(int N);
  void link(pALGraph pG, int v1, int v2);
  void insert(pNode pN, int vv);
  int BFS(pALGraph, int vv, int N);
  pQueue createQueue(int N);
  bool isEmpty(pQueue pQ);
  void inQueue(pQueue pQ, int e);
  int outQueue(pQueue pQ);
  
  int main()
  {
  //    freopen("in.txt", "r", stdin); // for test
      int i, N, M;
      scanf("%d%d", &N, &M);
     
     pALGraph pG;
     pG = initGraph(N);
     for(i = 0; i < M; i++)
     {
         int v1, v2;
         scanf("%d%d", &v1, &v2);
         link(pG, v1, v2);
      }
      int count;
     for(i = 1; i <= N; i++)
     {
          count = BFS(pG, i, N);
         printf("%d: %.2f%%\n", i, (float)count / N * 100);
     }
 //    fclose(stdin); // for test
     return 0;
  }
  
  pALGraph initGraph(int N)
  {
      pALGraph pG;
      pG = (pALGraph)malloc(sizeof(ALGraph));
      pG->adjList = (pNode *)malloc((N + 1) * sizeof(pNode));
      pG->n = N + 1;
      pG->visited = (bool *)malloc((N + 1) * sizeof(bool));
      memset(pG->visited, false, (N + 1) * sizeof(bool));
      for(int i = 0; i < N + 1; i++)
     {
          pG->adjList[i] = (pNode)malloc(sizeof(Node));
          pG->adjList[i]->v = i;
          pG->adjList[i]->next = NULL;
      }
      
      return pG;
  }
  
  void link(pALGraph pG, int v1, int v2)
  {
      insert(pG->adjList[v1], v2);
      insert(pG->adjList[v2], v1);
  }
  
  void insert(pNode pN, int vv)
  {
      pNode tmp = (pNode)malloc(sizeof(Node));
     tmp->v = vv;
      tmp->next = pN->next;
      pN->next = tmp;
  //    free(tmp);
  }
  
  int BFS(pALGraph pG, int vv, int N)
  {
      pQueue pQ;
      pQ = createQueue(N);
      
     int i, count, level, last, tail;
      pG->visited[vv] = true;
      count = 1;
      level = 0;
      last = vv;
      inQueue(pQ, vv);
     while(!isEmpty(pQ))
    {
        vv = outQueue(pQ);
        pNode pN = pG->adjList[vv]->next;
       while(pN)
       {
           if(!pG->visited[pN->v])
            {
                 pG->visited[pN->v] = true;
                count++;
               inQueue(pQ, pN->v);
                tail = pN->v;
            }
            pN = pN->next;        }
        if(vv == last)
       {
	               level++;
             last = tail;
       }
       if(level == 6)
             break;
     }
     memset(pG->visited, false, (N + 1) * sizeof(bool));
     
     return count;
 }
 
 pQueue createQueue(int N)
 {
     pQueue pQ;
     pQ = (pQueue)malloc(sizeof(Queue));
     pQ->elem = (int *)malloc((N + 1) * sizeof(int));
     pQ->front = pQ->rear = 0;
     pQ->size = N + 1;
 }
 
 bool isEmpty(pQueue pQ)
 {
     if(pQ->front != pQ->rear)
         return false;
     else
         return true;
 }
 
void inQueue(pQueue pQ, int e)
 {
     pQ->rear = (pQ->rear + 1) % pQ->size;
     pQ->elem[pQ->rear] = e;
 }
 
 int outQueue(pQueue pQ)
 {
     pQ->front = (pQ->front + 1) % pQ->size;
     return pQ->elem[pQ->front];
 }
