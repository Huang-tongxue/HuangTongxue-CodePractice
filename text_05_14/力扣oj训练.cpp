#include<stdio.h>
#include<stdlib.h>
  struct ListNode {
      int val;
      struct ListNode *next;
  };
  struct ListNode* removeElements(struct ListNode* head, int val) {

      struct ListNode* p = head;
      //struct ListNode * q = head->next;
      struct ListNode* t = head;
      if (head == NULL)
          return NULL;
      while (p != NULL)
      {
          if (p->val == val)
          {
              if (t == p)
              {
                  head = head->next;
                  p = t->next;
                  free(t);
                  t = p;
                  continue;
              }
              if (p == head)
              {
                  head = head->next;
              }
              while (t->next != p && t != p)
                  t = t->next;
              t->next = p->next;
              free(p);
              p = t->next;
              continue;
          }
          if (p != NULL)
              p = p->next;
      }
      return head;
  }
  /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


  struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
      if (list1 == NULL && list2 == NULL)
          return NULL;
      if (list1 == NULL)
          return list2;
      if (list2 == NULL)
          return list1;
      struct ListNode* head;
      struct ListNode* tail;
      if (list1->val <= list2->val)
      {
          head = tail = list1;
          list1 = list1->next;
      }
      else if (list2->val <= list1->val)
      {
          head = tail = list2;
          list2 = list2->next;
      }
      while (list1 != NULL && list2 != NULL)
      {
          if (list1->val <= list2->val)
          {
              tail->next = list1;
              tail = list1;
              list1 = list1->next;
          }
          else if (list2->val <= list1->val)
          {
              tail->next = list2;
              tail = list2;
              list2 = list2->next;
          }
      }
      if (list1 == NULL)
      {
          tail->next = list2;
      }
      else if (list2 == NULL)
      {
          tail->next = list1;
      }
      return head;
  }
  struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
      if (list1 == NULL && list2 == NULL)
          return NULL;
      if (list1 == NULL)
          return list2;
      if (list2 == NULL)
          return list1;
      struct ListNode* head;
      struct ListNode* tail;
      if (list1->val < list2->val)
      {
          head = tail = list1;
          list1 = list1->next;
      }
      else
      {
          head = tail = list2;
          list2 = list2->next;
      }
      while (list1 != NULL && list2 != NULL)
      {
          if (list1->val < list2->val)
          {
              tail->next = list1;
              tail = list1;
              list1 = list1->next;
          }
          if (list2->val < list1->val)
          {
              tail->next = list2;
              tail = list2;
              list2 = list2->next;
          }
      }
      if (list1 == NULL)
      {
          while (list2 != NULL)
          {
              tail->next = list2;
              tail = list2;
              list2 = list2->next;
          }
      }
      if (list2 == NULL)
      {
          while (list1 != NULL)
          {
              tail->next = list1;
              tail = list1;
              list1 = list1->next;
          }
      }
      return head;
  }
int main(void)
{
   
	return 0;
}