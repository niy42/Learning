#include <stdio.h>
#include <stdlib.h>
/**
 * main - del node two and insert forty five after node four
 * Return: Always zero
 */
 typedef struct node
 {
     int data;
     struct node *next;
 } node;
 void delNode(node **, int);
 void addAfter(node *, int, int x);
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
     for (; list->next;)
     {
         list = list->next;
     }
     list->next = tmp;
 }
 void printNode(node *list)
 {
     node *tmp;
     tmp = list;
     while (tmp)
     {
         printf("%d\n", tmp->data);
         tmp = tmp->next;
     }
 }
 int main(void)
 {
     node *root;
     root = NULL;
     int i;
     
     i = 0;
     do {
            add(&root, i);
            ++i;
     } while (i < 8);
     delNode(&root, 0);
     addAfter(root, 45, 4);
     printNode(root);
     return (0);
 }
 void addAfter(node *root, int val, int x)
 {
	 node *tmp;
	 tmp = root;

	 while (tmp->next && tmp->data != x)
	 {
		 tmp = tmp->next;
	 }
	 if (tmp->next != NULL)
	 {
		node *p;
	 	p = malloc(sizeof(node));
	 	p->data = val;
	 	p->next = tmp->next;
	 	tmp->next = p;
	 }
 }
 void delNode(node **root, int x)
 {
     node *tmp;
     tmp = *root;
     node *prev = NULL;
     while (tmp->next && tmp->data != x)
     {
         prev = tmp;
         tmp = tmp->next;
     }
     /*delete the head of the node*/
     if (prev == NULL)
     {
         *root = tmp->next;
         return;
     }
     else
     /*delete anywhere in the middle and end of the node*/
         prev->next = tmp->next;
 }
