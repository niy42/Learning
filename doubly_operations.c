/*
 * Project: Learning linked list operations
 * Author: Niyi && chat.openai.com
 *
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * 
 */
 typedef struct node
 {
     int data;
     struct node *next;
     struct node *prev;
 }node;
 void addNode(node **root, int x)
 {
     node *tmp = malloc(sizeof(node));
     tmp->data = x;
     tmp->next = NULL;
     tmp->prev = NULL;
     
     if (*root == NULL)
     {
         *root = tmp;
         return;
     }
     node *p = *root;
     while (p->next)
     {
         p = p->next;
     }
     p->next = tmp;
     tmp->prev = p;
 }
 void addAfterNode(node **root, int val, int x)
 {
     node *tmp = *root;/*tmp is used to traverse the list*/
     node *new_node = malloc(sizeof(node));/*node created to add after x*/
     while (tmp != NULL && tmp->data != x)
     {
         tmp = tmp->next;
     }
     if (tmp == NULL)
     {
         printf("Node with value %d not found\n", x);
         exit(1);
     }
     new_node->data = val;
     new_node->next = tmp->next;
     tmp->next = new_node;
     new_node->prev = tmp;
 }
 void addBeforeNode(node **root, int val, int x)
 {
     node *tmp = *root;/*tmp is used for traversing the list*/
     node *new_node = malloc(sizeof(node));/*node created to add before x*/
     while (tmp != NULL && tmp->data != x)
     {
         tmp = tmp->next;
     }
     if (new_node == NULL)
     {
         printf("unable to allocate memory\n");
         exit(1);
     }
     if (tmp == NULL)
     {
         printf("Node with value %d is not found\n");
         exit(1);
     }
     new_node->data = val;
     if (tmp->prev)
     {
         tmp->prev->next = new_node;
     }
     else
     {
         *root = new_node;
     }
     new_node->next = tmp;
     new_node->prev = tmp->prev;
     tmp->prev = new_node;
 }
 void displayNode(node *, int);
 int main(void)
 {
     int i;
     node *head_ref = NULL;
     
     i = 0;
     while (i < 8)
     {
         addNode(&head_ref, i);
         ++i;
     }
     displayNode(head_ref, 0);
     putchar(10);
     addAfterNode(&head_ref, 6, 2);
     displayNode(head_ref, 0);
     putchar(10);
     addBeforeNode(&head_ref, 3, 6);
     displayNode(head_ref, 0);
     return (0);
 }
 void displayNode(node *p, int x)
 {
     node *tmp = p;
     if (x == 0)
     {
         printf("testing node count: ");
     }
     while (tmp)
     {
         printf("%d", tmp->data);
         tmp = tmp->next;
     }
 }
