#include <stdio.h>
#include <stdlib.h>
/**
 * 
 */
 typedef struct node
 {
     int data;
     struct node *next;
 } node;
 void add(node **root, int value)
 {
     node *tmp;
     tmp = malloc(sizeof(node));
     tmp->data = value;
     tmp->next = NULL;
     
     if (*root == NULL)
     {
         *root = tmp;
         return;
     }
     node *list;
     list = *root;
     while (list->next)
     {
         list = list->next;
     }
     list->next = tmp;
 }
 void addAfter(node *, int value, int Aftervalue);
 void printNode(node *list)
 {
     node *tmp;
     tmp = list;
     do {
            printf("%d\n", tmp->data);
            tmp = tmp->next;
     } while (tmp != NULL);
 }
 void delNode(node *root, int x)
 {
     node *tmp;
     tmp = root;
     node *prev = NULL;
     while (tmp->next && tmp->data != x)
     {
         prev = tmp;/*points to predecessor*/
         tmp = tmp->next;/*points to successor*/
     }
     if (tmp->next == NULL && tmp->data != x)
     {
         return;
     }
    prev->next = tmp->next;
 }
 int main(void)
 {
     node *root;
     root = NULL;
     int i;
     
     i = 0;
     for (; i < 7;)
     {
         add(&root, i);
         ++i;
     }
     addAfter(root, 102, 1);
     delNode(root, 5);
     printNode(root);
     return(0);
  }
  void addAfter(node *head, int value, int x)
  {
      if (head == NULL)
      {
          return;
      }
      node *tmp;
      tmp = head;
      while (tmp->next && tmp->data != x)
      {
          tmp = tmp->next;
      }
      if (tmp->next != NULL)
      {
        node *p;
        p = malloc(sizeof(node));
        p->data = value;
        p->next = tmp->next;
        tmp->next = p;
       
      }
  }
