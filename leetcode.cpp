#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
 struct Node {
     int val;
     struct Node *next;
     struct Node *random;
 };
 //初始化
 struct Node* Init(struct Node* head)
 {
     head = (struct Node*)malloc(sizeof(struct Node));
     head->val = 9999;
     head->next = NULL;
     head->random = NULL;
     return head;
 }
 //尾插法
 void PushBack(struct Node* head,int a)
 {
     if (head->next == NULL)
     {
         head->val = a;
         return;
     }
     struct Node* tail = head;
     //找wei
     while (tail->next)
     {
        tail = tail->next;
     }
     struct Node* p;
     Init(p);
     tail->next = p;
     p->val = a;
 }
 //尾删法
 //主函数
 int main(void)
 {
     struct Node* head;
     head = Init(head);
     PushBack(head, 1);
     PushBack(head, 2);
     PushBack(head, 3);
     return 0;
 }