#include<stdio.h>
#include<stdlib.h>
#define ElemType int
#define Max 8 
typedef struct SQ
{
 ElemType data[Max];
 int front,rear;
}SqQueue;


void InitQueue(SqQueue * & q) 
{
 q = (SqQueue*)malloc(sizeof(SqQueue));
 q->front = q->rear = -1;
}

void DestroyQueue(SqQueue * & q)
{
 free(q);
}

bool enQueue(SqQueue * &q,ElemType e)
{
 if(q->rear == Max - 1)
 return false;
 q->rear++;
 q->data[q->rear] = e;
 return true;
}

bool deQueue(SqQueue* & q,ElemType &e)
{
 if(q->front == q->rear)
 return false;
 q->front++;
 e = q->data[q->front];
 return true;
}

//***********************以上是顺序队列函数 
//************以下是链队列函数
 typedef struct qnode
 {
  ElemType data;
  struct qnode* next;
 }DataNode;
 
 typedef struct
 {
  DataNode * front;
  DataNode * rear;
 }LinkQuNode;

void InitQueue(LinkQuNode* & q)
{
 q = (LinkQuNode *)malloc(sizeof(LinkQuNode));
 q->front = q->rear = NULL;
}

void DestroyQueue(LinkQuNode * & q)
{
 DataNode * pre = q->front,*p;
 if(pre != NULL)
 {
  p = pre->next;
  while(p != NULL)
  {
   free(pre);
   pre = p;
   p = pre->next;
  }
  free(pre);
 }
 free(q);
}

bool QueueEmptyS(LinkQuNode* q)
{
 return(q->rear == NULL);
}

void enQueue(LinkQuNode* & q,ElemType e)
{
 DataNode * p;
 p = (DataNode *)malloc(sizeof(LinkQuNode));
 p->data = e;
 p->next = NULL;
 if(q->rear == NULL)
 {
  q->front = q->rear = p;
 }
 else
 {
  q->rear->next = p;
  q->rear = p;
 }
}


bool deQueue(LinkQuNode * & q,ElemType &e)
{
 DataNode * t;
 if(q->rear == NULL)
 return false;
 t = q->front;
 if(q->front == q->rear)
 q->front = q->rear = NULL;
 else
 {
  q->front = q->front->next;
 } 
 e = t->data;
 free(t);
 return true; 
}

void numberQu(int n)
{
 int i;
 ElemType e;
 LinkQuNode * q;
 InitQueue(q);
 for(i = 1;i <= n;i++)
 {
  enQueue(q,i);
 }
 printf("报数出列顺序\n");
 while(!QueueEmptyS(q))
 {
  deQueue(q,e);
  printf("%d",e);
  if(!QueueEmptyS(q))
  {
   deQueue(q,e);
   enQueue(q,e);
  }
 }
 printf("\n");
}
int main(void)
{
	numberQu(8);
	numberQu(8);
	return 0;
}
